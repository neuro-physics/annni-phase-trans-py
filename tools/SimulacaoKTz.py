import math
import numpy
#from numba import jit,vectorize,float64

######################                     K,     T_valores, delta,  lamb,    xR,     H, t_transiente, t_total,             x0, mapa_nome, seguir_ponto_fixo, usar_modulo_de_m, percent_amostras_bootstrap, num_repete_bootstrap
#pythran export RodaSimulacao_Varios_T(float,       float[], float, float, float, float,          int,     int,        float[],       str,              bool,             bool,                      float,                  int)
def RodaSimulacao_Varios_T(                K,     T_valores, delta,  lamb,    xR,     H, t_transiente, t_total,             x0, mapa_nome,seguir_ponto_fixo=False,usar_modulo_de_m=False,percent_amostras_bootstrap=0.5,num_repete_bootstrap=0):
    """
    Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,
    ignorando os primeiros t_transiente passos,
    e repete isso para todos os H na lista H_valores

    e retorna a media temporal de x em funcao de T
    a media eh tomada a partir de t_transiente ate t_total

    K                 -> parametro de interacao entre camadas da rede de Bethe
    T_valores         -> lista de temperaturas
    delta             -> escala de tempo de recuperacao do feedback
    lamb              -> escala de tempo de forcamento do feedback
    xR                -> magnetizacao de referencia
    H                 -> campo magnetico externo
    t_transiente      -> intervalo de tempo transiente (a ser descartado da dinamica)
    t_total           -> intervalo total de tempo
    x0                -> DEVE SER numpy.array condicao inicial ( 3 valores para ktz, ou 2 valores para kt )
    mapa_nome         -> nome do mapa a ser iterado:
                         ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)
                         ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)
                         kttanh     : modelo KT com tanh (x0 deve ter 2 valores)
                         ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)
                         ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep
    seguir_ponto_fixo -> se True, então usa a condição inicial pro próximo T como o último estado do T anterior
    usar_modulo_de_m  -> se True, então usa |m| para calcular a media e a varririância

    parametros para calcular o desvio padrao da variancia por bootstrap
    percent_amostras_bootstrap -> percentual da quantidade de valores de x para selecionar uma amostra de bootstrap (percentual de (t_total - t_transiente))
    num_repete_bootstrap       -> numero de repeticoes para realizar o bootstrap

    retorna:
        x_media    -> x medio em funcao de H
        x_var      -> variancia de x em funcao de H
        x_var_std  -> desvio padrao da variancia de x em funcao de H (calculado usando bootstrap)
        x_suscept  -> susceptibilidade da magnetizacao (x) em funcao de H
    """
    x_media   = numpy.zeros(len(T_valores)) #[ 0.0 for _ in range(len(T_valores)) ]
    x_suscept = numpy.zeros(len(T_valores)) #[ 0.0 for _ in range(len(T_valores)) ]
    x_var     = numpy.zeros(len(T_valores)) #[ 0.0 for _ in range(len(T_valores)) ]
    x_var_std = numpy.zeros(len(T_valores)) #[ 0.0 for _ in range(len(T_valores)) ]
    for k in range(len(T_valores)):
        T              = T_valores[k]
        x_dados1       = RodaSimulacaoMapa(K,T,delta,lamb,xR,H,t_transiente,t_total,x0,mapa_nome)
        if seguir_ponto_fixo:
            x0 = x_dados1[-1,:]
        x_dados        = numpy.abs( x_dados1[:,0]) if usar_modulo_de_m else x_dados1[:,0]
        x_media[k]     = numpy.mean(x_dados )
        x_var[k]       = numpy.var( x_dados )
        x_suscept[k]   = KT_susceptibilidade(K, T, H, x_media[k])
        if num_repete_bootstrap > 0:
            _,x_var_std[k] = bootstrap_variance(x_dados,int(percent_amostras_bootstrap*x_dados.size),num_repete_bootstrap)
        else:
            x_var_std[k] = numpy.nan
    return x_media,x_var,x_var_std,x_suscept
    #return numpy.array(x_media),numpy.array(x_var),numpy.array(x_var_std),numpy.array(x_suscept)

###############                            K,     T, delta,  lamb,    xR,   H_valores, t_transiente, t_total,             x0, mapa_nome, seguir_ponto_fixo, usar_modulo_de_m, percent_amostras_bootstrap, num_repete_bootstrap
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,     float[],          int,     int,        float[],       str,              bool,             bool,                      float,                  int)
def RodaSimulacao_Varios_H(                K,     T, delta,  lamb,    xR,   H_valores, t_transiente, t_total,             x0, mapa_nome,seguir_ponto_fixo=False,usar_modulo_de_m=False,percent_amostras_bootstrap=0.5,num_repete_bootstrap=0):
    """
    Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,
    ignorando os primeiros t_transiente passos,
    e repete isso para todos os H na lista H_valores

    e retorna a media temporal de x em funcao de H
    a media eh tomada a partir de t_transiente ate t_total

    K                 -> parametro de interacao entre camadas da rede de Bethe
    T                 -> parametro de temperatura
    delta             -> escala de tempo de recuperacao do feedback
    lamb              -> escala de tempo de forcamento do feedback
    xR                -> magnetizacao de referencia
    H_valores         -> lista de campos magneticos externos
    t_transiente      -> intervalo de tempo transiente (a ser descartado da dinamica)
    t_total           -> intervalo total de tempo
    x0                -> DEVE SER numpy.array condicao inicial ( 3 valores para ktz, ou 2 valores para kt )
    mapa_nome         -> nome do mapa a ser iterado:
                         ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)
                         ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)
                         kttanh     : modelo KT com tanh (x0 deve ter 2 valores)
                         ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)
                         ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep
    seguir_ponto_fixo -> se True, então usa a condição inicial pro próximo T como o último estado do T anterior
    usar_modulo_de_m  -> se True, então usa |m| para calcular a media e a varririância

    parametros para calcular o desvio padrao da variancia por bootstrap
    percent_amostras_bootstrap -> percentual da quantidade de valores de x para selecionar uma amostra de bootstrap (percentual de (t_total - t_transiente))
    num_repete_bootstrap       -> numero de repeticoes para realizar o bootstrap

    retorna:
        x_media    -> x medio em funcao de H
        x_var      -> variancia de x em funcao de H
        x_var_std  -> desvio padrao da variancia de x em funcao de H (calculado usando bootstrap)
        x_suscept  -> susceptibilidade da magnetizacao (x) em funcao de H
    """
    x_media   = numpy.zeros(len(H_valores)) #[ 0.0 for _ in range(len(H_valores)) ]
    x_suscept = numpy.zeros(len(H_valores)) #[ 0.0 for _ in range(len(H_valores)) ]
    x_var     = numpy.zeros(len(H_valores)) #[ 0.0 for _ in range(len(H_valores)) ]
    x_var_std = numpy.zeros(len(H_valores)) #[ 0.0 for _ in range(len(H_valores)) ]
    for k in range(len(H_valores)):
        H              = H_valores[k]
        x_dados1       = RodaSimulacaoMapa(K,T,delta,lamb,xR,H,t_transiente,t_total,x0,mapa_nome)
        if seguir_ponto_fixo:
            x0 = x_dados1[-1,:]
        x_dados        = numpy.abs( x_dados1[:,0]) if usar_modulo_de_m else x_dados1[:,0]
        x_media[k]     = numpy.mean(x_dados )
        x_var[k]       = numpy.var( x_dados )
        x_suscept[k]   = KT_susceptibilidade(K, T, H, x_media[k])
        if num_repete_bootstrap > 0:
            _,x_var_std[k] = bootstrap_variance(x_dados,int(percent_amostras_bootstrap*x_dados.size),num_repete_bootstrap)
        else:
            x_var_std[k] = numpy.nan
    return x_media,x_var,x_var_std,x_suscept
    #return numpy.array(x_media),numpy.array(x_var),numpy.array(x_var_std),numpy.array(x_suscept)

###########                           K,     T, delta,  lamb,    xR,     H, t_transiente, t_total,           x0, mapa_nome
#pythran export RodaSimulacaoMapa(float, float, float, float, float, float,          int,     int,      float[], str      )
def RodaSimulacaoMapa(                K,     T, delta,  lamb,    xR,     H, t_transiente, t_total,           x0,mapa_nome):
    """
    Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,
    ignorando os primeiros t_transiente passos.

    K            -> parametro de interacao entre camadas da rede de Bethe
    T            -> parametro de temperatura
    delta        -> escala de tempo de recuperacao do feedback
    lamb         -> escala de tempo de forcamento do feedback
    xR           -> magnetizacao de referencia
    H            -> campo magnetico externo
    t_transiente -> intervalo de tempo transiente (a ser descartado da dinamica)
    t_total      -> intervalo total de tempo
    x0           -> DEVE SER numpy.array condicao inicial ( 3 valores para ktz, ou 2 valores para kt )
    mapa_nome    -> nome do mapa a ser iterado:
                    ktlog      : modelo KT com funcao logistica (x0 deve ter 2 valores)
                    ktzlog     : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)
                    kttanh     : modelo KT com tanh (x0 deve ter 2 valores)
                    ktztanh    : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)
                    ktzchialvo : modelo KT com adaptacao em T simplificando dinamica Chialvo et al 2020 Sci Rep
    
    retorna:
        x_dados -> x em funcao do tempo; cada item nessa lista eh um passo de tempo do modelo
    """
    mapa_nome_permitidos = [ 'ktlog', 'ktzlog', 'kttanh', 'ktztanh', 'ktzchialvo' ]
    mapa_nome            = mapa_nome.lower()
    if not(mapa_nome in mapa_nome_permitidos):
        print("mapa_nome deve ser um dos seguintes: ktlog, ktzlog, kttanh, ktztanh, ktzchialvo")
    #assert (mapa_nome in mapa_nome_permitidos), "mapa_nome deve ser um dos seguintes: %s"%str(mapa_nome_permitidos)[1:-1]

    # selecionando o modelo que queremos rodar
    if mapa_nome == 'ktlog':
        FuncMapa = KTLog_FuncMapa
    elif mapa_nome == 'ktzlog':
        FuncMapa = KTzLog_FuncMapa
    elif mapa_nome == 'kttanh':
        FuncMapa = KTTanh_FuncMapa
    elif mapa_nome == 'ktztanh':
        FuncMapa = KTzTanh_FuncMapa
    elif mapa_nome == 'ktzchialvo':
        FuncMapa = KTCTanh_FuncMapa

    # rodando o transiente da dinamica
    #x = numpy.array(x0, dtype=numpy.float64).flatten()
    x = x0
    for t in range(t_transiente):
        x = FuncMapa(x, t, K, T, delta, lamb, xR, H)

    # loop principal, onde guardamos os dados em funcao do tempo
    x_dados      = numpy.zeros((t_total-t_transiente+1,x.size),dtype=numpy.float64) #[ numpy.zeros(len(x0)) for _ in range(t_total-t_transiente+1) ]
    x_dados[0,:] = x
    for t in range(1,t_total-t_transiente+1):
        x            = FuncMapa(x, t, K, T, delta, lamb, xR, H)
        x_dados[t,:] = x
    
    return x_dados #numpy.array(x_dados)

#pythran export calc_AutoCorr(  float[], bool)
def calc_AutoCorr(x, normalize):
    """
    calcula a função de autocorrelação AC normalizada ou não

    x -> dados da serie temporal da magnetizacao
    normalize -> if normalize, then AC[0] is always 1
                aparentemente, na definição de Chialvo et al 2020 Scientific RepoRtS 10:12145 - https://doi.org/10.1038/s41598-020-69154-0 (Ver material suplementar)
                a função de AC deve ser sempre 1 em lag = 0 (independente de T)
    """
    if normalize:
        return calc_AutoCorr_normalized(x)
    return calc_AutoCorr_not_normalized(x)

#pythran export calc_AutoCorr_lag(  float[], int, bool)
def calc_AutoCorr_lag(x, tau, normalize):
    """
    calcula a função de autocorrelação AC normalizada ou não

    x -> dados da serie temporal da magnetizacao
    normalize -> if normalize, then AC[0] is always 1
                aparentemente, na definição de Chialvo et al 2020 Scientific RepoRtS 10:12145 - https://doi.org/10.1038/s41598-020-69154-0 (Ver material suplementar)
                a função de AC deve ser sempre 1 em lag = 0 (independente de T)
    """
    if normalize:
        return calc_AutoCorr_normalized_lag(x,tau)
    return calc_AutoCorr_not_normalized_lag(x,tau)

#pythran export calc_AutoCorr_not_normalized(  float[])
def calc_AutoCorr_not_normalized(x):
    """
    equivalente a numpy.correlate e scipy.signal.correlate
    com mode='full' ou 'same'
    https://numpy.org/doc/stable/reference/generated/numpy.correlate.html
    produto escalar de x(t) com x(t+tau)
    C(tau) = x(t) . x(t+tau)
    onde o produto escalar (.) varre todo o tempo
    """
    #### the implementation below is completely equivalent to the numpy.correlate(x,x,'full'), for real-valued x
    #### so I'll keep it here for reference
    #C    = numpy.zeros(x.size) # use int(x.size/2) for equavalence with 'same' in numpy.correlate, or this for equivalence with 'full'
    #xpad = numpy.zeros(x.size + 2*C.size)
    #xpad[C.size:(C.size+x.size)] = x
    #for tau in range(C.size):
    #    C[tau] = numpy.dot(xpad[C.size:(C.size+x.size)],xpad[(C.size+tau):(C.size+x.size+tau)])
    #return C
    get_from_max_on = lambda C: C[numpy.nanargmax(C):]
    return get_from_max_on(numpy.correlate(x,x,'full'))

#pythran export calc_AutoCorr_not_normalized_lag(  float[], int)
def calc_AutoCorr_not_normalized_lag(x,tau):
    """
    equivalente a numpy.correlate e scipy.signal.correlate
    com mode='full' ou 'same'
    https://numpy.org/doc/stable/reference/generated/numpy.correlate.html
    produto escalar de x(t) com x(t+tau)
    C(tau) = x(t) . x(t+tau)
    onde o produto escalar (.) varre todo o tempo
    """
    # the calculation below is the same as
    # numpy.correlate(x,x,'valid')
    #### the implementation below is completely equivalent to the numpy.correlate(x,x,'full'), for real-valued x
    #### so I'll keep it here for reference
    xpad = numpy.zeros(3*x.size)
    xpad[x.size:(x.size+x.size)] = x
    return numpy.dot(xpad[x.size:(x.size+x.size)],xpad[(x.size+tau):(x.size+x.size+tau)])

#pythran export calc_AutoCorr_normalized(  float[])
def calc_AutoCorr_normalized(x):
    C    = numpy.zeros(x.size) # use int(x.size/2) for equavalence with 'same' in numpy.correlate, or this for equivalence with 'full'
    xm   = numpy.mean(x)
    xv   = numpy.var(x)
    xpad = numpy.zeros(x.size + 2*C.size) # padding x with zeros to deal with boundary conditions
    xpad[C.size:(C.size+x.size)] = x
    for tau in range(C.size):
        C[tau] = numpy.mean((xpad[C.size:(C.size+x.size)]-xm)*(xpad[(C.size+tau):(C.size+x.size+tau)]-xm))/xv
    return C

#pythran export calc_AutoCorr_normalized_lag(  float[], int)
def calc_AutoCorr_normalized_lag(x, tau):
    xm   = numpy.mean(x)
    xv   = numpy.var(x)
    xpad = numpy.zeros(3*x.size) # padding x with zeros to deal with boundary conditions
    xpad[x.size:(x.size+x.size)] = x
    return numpy.mean((xpad[x.size:(x.size+x.size)]-xm)*(xpad[(x.size+tau):(x.size+x.size+tau)]-xm))/xv

#pythran export KTLog_FuncMapa(  float[], int, float, float, float, float, float, float)
def KTLog_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + H) / T
    x[1] = x[0]
    x[0] = arg / (1.0 + abs(arg))
    return x

#pythran export KTzLog_FuncMapa(  float[], int, float, float, float, float, float, float)
def KTzLog_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + x[2] + H) / T
    x[1] = x[0]
    x[2] = (1.0-delta)*x[2] - lamb*(x[0] - xR)
    x[0] = arg / (1.0 + abs(arg))
    return x

#pythran export KTTanh_FuncMapa(  float[], int, float, float, float, float, float, float)
def KTTanh_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + H) / T
    x[1] = x[0]
    x[0] = 2.0 / (1.0 + my_exp(-2.0 * arg)) - 1.0 #x[0] = 2.0 / (1.0 + numpy.exp(-2.0 * arg)) - 1.0
    return x

#pythran export KTzTanh_FuncMapa(  float[], int, float, float, float, float, float, float)
def KTzTanh_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + x[2] + H) / T
    x[1] = x[0]
    x[2] = (1.0-delta)*x[2] - lamb*(x[0] - xR)
    x[0] = 2.0 / (1.0 + my_exp(-2.0 * arg)) - 1.0 #x[0] = 2.0 / (1.0 + numpy.exp(-2.0 * arg)) - 1.0
    return x

#pythran export KTCTanh_FuncMapa(  float[], int, float, float, float, float, float, float)
def KTCTanh_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + H) / x[2]
    x[1] = x[0]
    x[2] = (1.0-delta)*x[2] - lamb*(x[0] - xR)
    x[0] = 2.0 / (1.0 + my_exp(-2.0 * arg)) - 1.0 #x[0] = 2.0 / (1.0 + numpy.exp(-2.0 * arg)) - 1.0
    return x

#pythran export bootstrap_variance(     float[],int,int)
def bootstrap_variance(x,n_samples,n_repeats):
    #N = range(len(x))
    var_mean = 0.0
    var_std  = 0.0
    for k in range(n_repeats):
        ind       = numpy.random.choice(len(x), n_samples, False) #random.sample(N,n_samples)
        y         = numpy.var(x[ind]) #numpy.var([x[i] for i in ind])
        var_mean += y
        var_std  += y*y
    var_mean = var_mean / float(n_repeats)
    var_std  = numpy.sqrt(var_std / float(n_repeats) - var_mean*var_mean)
    return var_mean,var_std

#pythran export KT_susceptibilidade(    float,    float,    float,    float)
def KT_susceptibilidade(K,T,H,m_medio):
    """
    retorna a derivada da magnetizacao em relacao a H
    """
    #return 2.0 / (-2.0+2*K+T*(1.0+numpy.cosh(2.0*((1-K)*m_medio+H)/T)) )
    return 2.0 / (-2.0  +  2.0*K  +  T * (  1.0  +  cosh(2.0*((1-K)*m_medio+H)/T)  ))
    #return 1.0/(K-1.0+T/(( sech(   ((1-K)*m_medio+H)/T   ) )**2))

#pythran export my_exp(    float)
#@vectorize([float64(float64)])
def my_exp(x):
    return math.exp(x) if x < 709.782712893384 else numpy.inf #1.797693134862273e+308 # correct overflow error

#pythran export cosh(    float)
#pythran export cosh(  float[])
def cosh(x):
    a = numpy.exp(x) # my_exp(x) #
    if a == 0.0:
        return numpy.inf
    return ( 1.0 + (a*a) )/(2.0*a)

#pythran export sech(    float)
#pythran export sech(  float[])
def sech(x):
    c = cosh(x)
    if c == 0.0:
        return numpy.inf
    return 1.0/c
    #arg = numpy.exp(x)
    #return 2.0*arg/( 1.0 + (arg*arg) )
