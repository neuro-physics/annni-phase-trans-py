
import math
import numpy as np
import scipy.integrate
from numba import njit,types,vectorize

@njit(types.float64(types.float64))
def my_exp(x): #definimos essa função para evitar o erro de overflow
    return math.exp(x) if x < 709.782712893384 else np.inf

@njit(types.float64(types.float64))
def tanh(x): #definimos essa função para evitar o erro de overflow
    e = my_exp(2.0*x)
    return (e-1.0)/(e+1.0)

@njit(types.float64(types.float64))
def sech(x):
    e = my_exp(x)
    return 2.0/(e+(1.0/e))

@vectorize([types.float64(types.float64,types.float64,types.float64,types.float64,types.float64)], nopython=True)
def f_KTContTime(m, h, T, K, H):
    beta = 1.0/T
    return -m + tanh(beta * (m -K*h + H))

@vectorize([types.float64(types.float64,types.float64,types.float64,types.float64,types.float64)], nopython=True)
def g_KTContTime(m, h, T, K, H):
    return -h+m

@vectorize([types.float64(types.float64,types.float64,types.float64,types.float64)], nopython=True)
def y_FP_nullcline(m,T,K,H):
    return (-T*np.arctanh(m) + m + H)/K

@njit(types.float64[:,:](types.float64[:],types.float64,types.float64,types.float64))
def Jacobian_KTContTime(x, T, K, H):
    '''
    Jacobian of the vector field
    f = -m + tanh(beta*(J*m+h))
    g = -c*m
    '''
    beta = 1.0/T
    m  = x[0]
    h  = x[1]
    A  = np.zeros((2,2))
    s2 = sech(beta * (m-K*h+H))**2
    A[0,0] = -1 + beta * s2
    A[0,1] = beta * K * s2
    A[1,0] = 1
    A[1,1] = -1
    return A

@njit(types.float64[:](types.float64,types.float64[:],types.float64,types.float64,types.float64))
def dxdt_KTContTime(t, x, T, K, H):
    '''
    x[0] -> magnetization
    x[1] -> magnetic field (dynamic)
    https://dx.doi.org/10.1038/s43588-023-00410-9
    '''
    xdot    = np.zeros(2)
    xdot[0] = -x[0] + tanh((1.0/T) * (x[0] - K * x[1] + H))
    xdot[1] = -x[1]+x[0]
    return xdot

@njit
def integrate_RK2(t, x, f, dt, *params):
    """
    Advances state using second-order Runge-Kutta (RK2).

    Parameters
    ----------
    x : array_like
        Current state vector.
    f : callable
        Function computing derivatives of the system.
    dt : float
        Time step size.
    *params : tuple
        Additional parameters passed to f.

    Returns
    -------
    x_next : ndarray
        Updated state after one RK2 step.
    """
    k1 = f(t,x, *params)
    k2 = f(t,x + 0.5*dt*k1, *params)
    return x + dt*k2

@njit
def integrate_Euler(t, x, f, dt, *params):
    """
    Advances state using second-order Runge-Kutta (RK2).

    Parameters
    ----------
    x : array_like
        Current state vector.
    f : callable
        Function computing derivatives of the system.
    dt : float
        Time step size.
    *params : tuple
        Additional parameters passed to f.

    Returns
    -------
    x_next : ndarray
        Updated state after one RK2 step.
    """
    return x + dt*f(t,x,*params)

@njit
def run_simulation(integrator, f, x0, dt, T_trans, T, params):
    """
    Runs a simulation of a dynamical system.

    Parameters
    ----------
    integrator : callable
        Numerical integration function (e.g., Euler, RK4).
    f : callable
        Function computing derivatives of the system.
    x0 : array_like
        Initial state vector.
    dt : float
        Time step size.
    T_trans : int
        Number of transient time steps. (ignored)
    T : int
        Number of time steps.
    params : tuple
        Additional parameters passed to f.

    Returns
    -------
    x_data : ndarray
        Array of system states over time.
    """
    x      = x0.copy()
    for t in range(T_trans):
        x       = integrator(t, x, f, dt, *params)
    T_record    = T-T_trans
    x_data      = np.zeros((T_record,len(x0)))
    x_data[0,:] = x
    for t in range(1,T_record):
        x           = integrator(t+T_trans, x, f, dt, *params)
        x_data[t,:] = x
    return x_data

def select_unique(X,tol=1e-8,sort=True):
    Y          = [ X[0] ]
    checked    = np.zeros(len(X),dtype=bool)
    checked[0] = True
    for i in range(1,len(X)):
        if not checked[i]:
            for j in range(len(Y)):
                add_elem = np.abs(X[i]-Y[j]) > tol
                if not add_elem:
                    break
            if add_elem:
                Y.append(X[i])
                checked[i] = True
    return np.sort(Y) if sort else np.atleast_1d(Y)

def count_crossings(signal, threshold=0.0):
    y = np.asarray(signal) - threshold
    s = np.sign(y)
    nz = np.nonzero(s)[0]
    if len(nz) == 0:
        return 0
    s[:nz[0]] = s[nz[0]]
    for k in range(nz[0] + 1, len(s)):
        if s[k] == 0:
            s[k] = s[k-1]
    return np.count_nonzero(np.diff(s))

def find_zeros(x0,x1,dx,f,params=None,tol=1e-8):
    if isinstance(params,type(None)):
        params = tuple([])
    x  = np.arange(x0,x1+dx,dx)
    xS = []
    for k in range(1,len(x)-1):
        y0 = f(x[k-1],*params)
        y1 = f(x[k]  ,*params)
        y2 = f(x[k+1],*params)
        if y0*y1 < 0:
            xS.append( (x[k-1] + x[k])/2.0 )
        elif y1*y2 < 0:
            xS.append( (x[k] + x[k+1])/2.0 )
        else:
            if np.abs(y0) < tol:
                xS.append(x[k-1])
            elif np.abs(y1) < tol:
                xS.append(x[k])
            elif np.abs(y2) < tol:
                xS.append(x[k+1])
            else:
                if np.abs(y1) < np.abs(y0) and np.abs(y1) < np.abs(y2):
                    if np.abs(y1) < 100*tol:
                        xS.append(x[k])
    return np.unique(np.atleast_1d(xS))

