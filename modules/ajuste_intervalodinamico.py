import random
import math
import scipy.optimize
import numpy
import scipy.interpolate        #função que interliga os pontos

def seleciona_intervalo(H, m, H_inicio, H_fim):
    ind1 = find_first(H >= H_inicio)
    ind2 =  find_last(H <= H_fim)
    return H[ind1:ind2], m[ind1:ind2]

def intervalo_dinamico(m, H, frac=0.1, numeros_H_para_interpolar=10000, H_ref=None):
    #if not(type(H_ref) is type(None)):
    #    ind_m_min = numpy.argmin(numpy.abs(H-H_ref)) # indice do valor de m que corresponde a H==H_ref
    #else:
    #    ind_m_min = numpy.argmin(m) # indice do valor minimo de m
    #ind_m_max = numpy.argmax(m) # indice do valor maximo de m
    ##vamos criar novos valores de H para depois gerar novos valores de m.
    ##H_interp=numpy.logspace(numpy.log10(numpy.min(H)), numpy.log10(numpy.max(H)), numeros_H_para_interpolar)
    ##m_interp= m_spline(H_interp)
    #m_max = m[ind_m_max]                 #valores maximo de m1
    #m_min = m[ind_m_min]                 #numpy.min(m)                 #valores minimos de m1
    #m_delta = m_max - m_min              #calculo de variação de m
    #m_90pur = m_min + m_delta*(1 - frac) #calculo de 90%
    #m_10pur = m_min + m_delta*frac       #calculo de 10% acima de zero

    m_10pur,m_90pur,ind_m_min,ind_m_max = calcula_m10_m90(m,H,frac=frac,H_ref=H_ref)
    ind1 = find_first(numpy.logical_and(m >= m_10pur,H >= H[ind_m_min]))
    ind2 =  find_last(numpy.logical_and(m <= m_90pur,H <= H[ind_m_max]))
    m_selecionado = m[ind1:ind2] #H_selecionado = H[numpy.logical_and(m >= m_10pur, m <= m_90pur)]
    H_selecionado = H[ind1:ind2] #m_selecionado = m[numpy.logical_and(m >= m_10pur, m <= m_90pur)]    

    #spline é uma função que nos retorna um valor de m para qualquer valor de H
    m_spline = scipy.interpolate.interp1d(H, m, kind='cubic')

    H_1 = H[ind1 - 1 if ind1 >= 1 else 0] # definindo os limites da interpolação
    H_2 = H[ind1 + 1]                     # definindo os limites da interpolação
    H1_interp = numpy.logspace(numpy.log10(numpy.min(H_1)), numpy.log10(numpy.max(H_2)), numeros_H_para_interpolar)
    m1_interp = m_spline(H1_interp)

    H_1 = H[ind2 - 1]                                         # definindo os limites da interpolação
    H_2 = H[ind2 + 1 if ind2 < (H.size - 1) else H.size - 1]  # definindo os limites da interpolação
    H2_interp = numpy.logspace(numpy.log10(numpy.min(H_1)), numpy.log10(numpy.max(H_2)), numeros_H_para_interpolar)
    m2_interp = m_spline(H2_interp)

    k1 = numpy.argmin(numpy.abs(m1_interp - m_10pur)) #argmin nos da o indicide do valor minimo da diferença entre m_inter e o m_10purcento
    k2 = numpy.argmin(numpy.abs(m2_interp - m_90pur))

    H_delta = 10*numpy.log10(H2_interp[k2]/H1_interp[k1])

    return H_delta, m_selecionado, H_selecionado

def find_first(condition):  
    #essa nos retorna o indice do primeiro elemento que satisfaz uma condição se não achar nada retosna -1
    if condition.size == 0:
        return -1
    k = numpy.argmax(condition.astype(numpy.int64))
    if (k == 0) and (not condition[0]):
        return -1 # no element found
    else:
        return k

def find_last(condition):  
    #essa função retorna o indice do ultimo item que satisfaz a condição
    if condition.size == 0:
        return -1
    #k = numpy.argmax(condition.astype(numpy.int64))
    k = numpy.nonzero(condition)[0]
    if (k.size == 0):
        return -1 # no element found
    else:
        return k[-1]

def ajuste_expoente_critico(m, H, frac=0.1, usa_log=False, H_ref=None):
    """ Essa função retorna o popt o perro onde 
    popt[0] é o inverso de expoente crítico e o perro[0] é o erro associado a popt[0]
    """
    f = lambda x,a,b: a*x+b           #"lambda" é usado para definair função de uma so linha
    if usa_log:
        H_log = numpy.log(H)
        m_log = numpy.log(m)
        H_ref = numpy.log(H_ref) if not(type(H_ref) is type(None)) else None
    else:
        H_log = H
        m_log = m
    
    #m_max = numpy.max(m_log)               #valores maximo de m1
    #m_min = numpy.min(m_log)               #valores minimos de m1
    #m_delta = m_max - m_min              #calculo de variação de m
    #m_90pur = m_min + m_delta*(1 - frac) #calculo de 90%
    #m_10pur = m_min + m_delta*frac       #calculo de 10% acima de zero
    #H_selecionado = H_log[numpy.logical_and(m_log >= m_10pur, m_log <= m_90pur)]
    #m_selecionado = m_log[numpy.logical_and(m_log >= m_10pur, m_log <= m_90pur)]
    m_10pur,m_90pur,ind_m_min,ind_m_max = calcula_m10_m90(m_log,H_log,frac=frac,H_ref=H_ref)
    ind1          = find_first(numpy.logical_and(m_log >= m_10pur,H_log >= H_log[ind_m_min]))
    ind2          =  find_last(numpy.logical_and(m_log <= m_90pur,H_log <= H_log[ind_m_max]))
    m_selecionado = m_log[ind1:ind2] #H_selecionado = H[numpy.logical_and(m >= m_10pur, m <= m_90pur)]
    H_selecionado = H_log[ind1:ind2] #m_selecionado = m[numpy.logical_and(m >= m_10pur, m <= m_90pur)]    
    if not usa_log: # se nao usamos log para selecionar os valores de m_10pur e m_90pur
        H_selecionado = numpy.log(H_selecionado) #numpy.log(H_log[numpy.logical_and(m_log >= m_10pur, m_log <= m_90pur)])
        m_selecionado = numpy.log(m_selecionado) #numpy.log(m_log[numpy.logical_and(m_log >= m_10pur, m_log <= m_90pur)])

    popt, pcov = scipy.optimize.curve_fit(f, H_selecionado, m_selecionado, p0=(0.33, 0.0))  
    perro      = numpy.sqrt(numpy.diag(pcov))

    return popt, perro


def calcula_amplitude(m):
    return numpy.max(m) - numpy.min(m)

def calcula_m10_m90(m,H,frac=0.1,H_ref=None):
    """
    essa funcao calcula os valores m_90pur e m_10pur
    que sao os limites dentro dos quais queremos calcular o intervalo de resposta dinamico
    e o expoente critico
    """
    if not(type(H_ref) is type(None)):
        ind_m_min = numpy.argmin(numpy.abs(H-H_ref)) # indice do valor de m que corresponde a H==H_ref
    else:
        ind_m_min = numpy.argmin(m) # indice do valor minimo de m
    ind_m_max = numpy.argmax(m) # indice do valor maximo de m
    m_max = m[ind_m_max]                 #valores maximo de m1
    m_min = m[ind_m_min]                 #numpy.min(m)                 #valores minimos de m1
    m_delta = m_max - m_min              #calculo de variação de m
    m_90pur = m_min + m_delta*(1 - frac) #calculo de 90%
    m_10pur = m_min + m_delta*frac       #calculo de 10% acima de zero
    return m_10pur,m_90pur,ind_m_min,ind_m_max