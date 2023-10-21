import random
import numpy
import math

#                                          K,     T, delta,  lamb,    xR,   H_valores, t_transiente,t_total,             x0, mapa_nome, usar_modulo_de_m, percent_amostras_bootstrap, num_repete_bootstrap
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,     float[],          int,    int,     float list,       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,   float64[],          int,    int,   float64 list,       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,     float[],          int,    int,        float[],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,   float64[],          int,    int,      float64[],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,   float64[],          int,    int,        float[],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,     float[],          int,    int,      float64[],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,   float[::],          int,    int,      float[::],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float, float64[::],          int,    int,    float64[::],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float, float64[::],          int,    int,      float[::],       str,             bool,                      float,                  int)
#pythran export RodaSimulacao_Varios_H(float, float, float, float, float,   float[::],          int,    int,    float64[::],       str,             bool,                      float,                  int)
def RodaSimulacao_Varios_H(K,T,delta,lamb,xR,H_valores,t_transiente,t_total,x0,mapa_nome,usar_modulo_de_m=False,percent_amostras_bootstrap=0.5,num_repete_bootstrap=10):
    """
    Essa funcao itera o mapa identificado por 'mapa_nome' por um total de t_total passos de tempo,
    ignorando os primeiros t_transiente passos,
    e repete isso para todos os H na lista H_valores

    e retorna a media temporal de x em funcao de H
    a media eh tomada a partir de t_transiente ate t_total

    K                -> parametro de interacao entre camadas da rede de Bethe
    T                -> parametro de temperatura
    delta            -> escala de tempo de recuperacao do feedback
    lamb             -> escala de tempo de forcamento do feedback
    xR               -> magnetizacao de referencia
    H_valores        -> lista de campos magneticos externos
    t_transiente     -> intervalo de tempo transiente (a ser descartado da dinamica)
    t_total          -> intervalo total de tempo
    x0               -> condicao inicial ( 3 valores para ktz, ou 2 valores para kt )
    mapa_nome        -> nome do mapa a ser iterado:
                        ktlog   : modelo KT com funcao logistica (x0 deve ter 2 valores)
                        ktzlog  : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)
                        kttanh  : modelo KT com tanh (x0 deve ter 2 valores)
                        ktztanh : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)
    usar_modulo_de_m -> se True, então usa |m| para calcular a media e a varririância

    parametros para calcular o desvio padrao da variancia por bootstrap
    percent_amostras_bootstrap -> percentual da quantidade de valores de x para selecionar uma amostra de bootstrap (percentual de (t_total - t_transiente))
    num_repete_bootstrap       -> numero de repeticoes para realizar o bootstrap

    retorna:
        x_media    -> x medio em funcao de H
        x_var      -> variancia de x em funcao de H
        x_var_std  -> desvio padrao da variancia de x em funcao de H (calculado usando bootstrap)
        x_suscept  -> susceptibilidade da magnetizacao (x) em funcao de H
    """
    x_media   = [ 0.0 for _ in range(len(H_valores)) ]
    x_suscept = [ 0.0 for _ in range(len(H_valores)) ]
    x_var     = [ 0.0 for _ in range(len(H_valores)) ]
    x_var_std = [ 0.0 for _ in range(len(H_valores)) ]
    for k in range(len(H_valores)):
        H              = H_valores[k]
        x_dados        = RodaSimulacaoMapa(K,T,delta,lamb,xR,H,t_transiente,t_total,x0,mapa_nome)
        x_dados        = numpy.abs( x_dados[:,1]) if usar_modulo_de_m else x_dados[:,1]
        x_media[k]     = numpy.mean(x_dados     )
        x_suscept[k]   = KT_susceptibilidade(K, T, H, x_media[k])
        x_var[k]       = numpy.var( x_dados     )
        _,x_var_std[k] = bootstrap_variance(x_dados,int(percent_amostras_bootstrap*x_dados.size),num_repete_bootstrap)
    return numpy.array(x_media),numpy.array(x_var),numpy.array(x_var_std),numpy.array(x_suscept)

#                                     K,     T, delta,  lamb,    xR,     H, t_transiente,t_total,           x0, mapa_nome
#pythran export RodaSimulacaoMapa(float, float, float, float, float, float,          int,    int,      float[], str      )
#pythran export RodaSimulacaoMapa(float, float, float, float, float, float,          int,    int,    float64[], str      )
#pythran export RodaSimulacaoMapa(float, float, float, float, float, float,          int,    int,   float list, str      )
#pythran export RodaSimulacaoMapa(float, float, float, float, float, float,          int,    int, float64 list, str      )
def RodaSimulacaoMapa(K,T,delta,lamb,xR,H,t_transiente,t_total,x0,mapa_nome):
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
    x0           -> condicao inicial ( 3 valores para ktz, ou 2 valores para kt )
    mapa_nome    -> nome do mapa a ser iterado:
                    ktlog   : modelo KT com funcao logistica (x0 deve ter 2 valores)
                    ktzlog  : modelo KT com adaptacao e funcao logistica (x0 deve ter 3 valores)
                    kttanh  : modelo KT com tanh (x0 deve ter 2 valores)
                    ktztanh : modelo KT com adaptacao e funcao tanh (x0 deve ter 3 valores)
    
    retorna:
        x_dados -> x em funcao do tempo; cada item nessa lista eh um passo de tempo do modelo
    """
    mapa_nome_permitidos = [ 'ktlog', 'ktzlog', 'kttanh', 'ktztanh' ]
    mapa_nome            = mapa_nome.lower()
    assert (mapa_nome in mapa_nome_permitidos), "mapa_nome deve ser um dos seguintes: %s"%str(mapa_nome_permitidos)[1:-1]

    # selecionando o modelo que queremos rodar
    if mapa_nome == 'ktlog':
        FuncMapa = KTLog_FuncMapa
    elif mapa_nome == 'ktzlog':
        FuncMapa = KTzLog_FuncMapa
    elif mapa_nome == 'kttanh':
        FuncMapa = KTTanh_FuncMapa
    elif mapa_nome == 'ktztanh':
        FuncMapa = KTzTanh_FuncMapa

    # rodando o transiente da dinamica
    x = numpy.asarray(x0).flatten()
    for t in range(t_transiente):
        x = FuncMapa(x, t, K, T, delta, lamb, xR, H)

    # loop principal, onde guardamos os dados em funcao do tempo
    x_dados    = [ numpy.zeros(len(x0)) for _ in range(t_total-t_transiente+1) ]
    x_dados[0] = x.copy()
    for t in range(1,t_total-t_transiente+1):
        x          = FuncMapa(x, t, K, T, delta, lamb, xR, H)
        x_dados[t] = x.copy()
    
    return numpy.array(x_dados)

#pythran export KTLog_FuncMapa(  float[], int, float, float, float, float, float, float)
#pythran export KTLog_FuncMapa(float64[], int, float, float, float, float, float, float)
def KTLog_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + H) / T
    x[1] = x[0]
    x[0] = arg / (1.0 + abs(arg))
    return x

#pythran export KTzLog_FuncMapa(  float[], int, float, float, float, float, float, float)
#pythran export KTzLog_FuncMapa(float64[], int, float, float, float, float, float, float)
def KTzLog_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + x[2] + H) / T
    x[1] = x[0]
    x[2] = (1.0-delta)*x[2] - lamb*(x[0] - xR)
    x[0] = arg / (1.0 + abs(arg))
    return x

#pythran export KTTanh_FuncMapa(  float[], int, float, float, float, float, float, float)
#pythran export KTTanh_FuncMapa(float64[], int, float, float, float, float, float, float)
def KTTanh_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + H) / T
    x[1] = x[0]
    x[0] = 2.0 / (1.0 + math.exp(-2.0 * arg)) - 1.0
    return x

#pythran export KTzTanh_FuncMapa(  float[], int, float, float, float, float, float, float)
#pythran export KTzTanh_FuncMapa(float64[], int, float, float, float, float, float, float)
def KTzTanh_FuncMapa(x, t, K, T, delta, lamb, xR, H):
    arg  = (x[0] - K*x[1] + x[2] + H) / T
    x[1] = x[0]
    x[2] = (1.0-delta)*x[2] - lamb*(x[0] - xR)
    x[0] = 2.0 / (1.0 + math.exp(-2.0 * arg)) - 1.0
    return x

#pythran export bootstrap_variance(     float[],int,int)
#pythran export bootstrap_variance(   float64[],int,int)
#pythran export bootstrap_variance(  float list,int,int)
#pythran export bootstrap_variance(float64 list,int,int)
def bootstrap_variance(x,n_samples,n_repeats):
    N = range(len(x))
    var_mean = 0.0
    var_std  = 0.0
    for k in range(n_repeats):
        ind       = random.sample(N,n_samples)
        y         = numpy.var([x[i] for i in ind])
        var_mean += y
        var_std  += y*y
    var_mean = var_mean / float(n_repeats)
    var_std  = math.sqrt(var_std / float(n_repeats) - var_mean*var_mean)
    return var_mean,var_std

#     not accepting these other inputs yet (    float,    float,    float,  float[])
#     not accepting these other inputs yet (    float,    float,    float,float64[])
#     not accepting these other inputs yet (    float,    float,  float[],  float[])
#     not accepting these other inputs yet (    float,    float,  float[],float64[])
#     not accepting these other inputs yet (    float,    float,float64[],float64[])
#     not accepting these other inputs yet (    float,  float[],  float[],  float[])
#     not accepting these other inputs yet (    float,  float[],  float[],float64[])
#     not accepting these other inputs yet (    float,  float[],float64[],float64[])
#     not accepting these other inputs yet (    float,float64[],float64[],float64[])
#     not accepting these other inputs yet (  float[],  float[],  float[],  float[])
#     not accepting these other inputs yet (  float[],  float[],  float[],float64[])
#     not accepting these other inputs yet (  float[],  float[],float64[],float64[])
#     not accepting these other inputs yet (  float[],float64[],float64[],float64[])
#     not accepting these other inputs yet (float64[],float64[],float64[],float64[])
#pythran export KT_susceptibilidade(    float,    float,    float,    float)
def KT_susceptibilidade(K,T,H,m_medio):
    """
    retorna a derivada da magnetizacao em relacao a H
    """
    c = T+K-1.0
    if c == 0.0:
        c = numpy.inf
    else:
        c = 1.0/c
    return c * ( sech( (  m_medio*(1.0-K)+H  )/T ) )**2

#pythran export sech(    float)
#pythran export sech(  float[])
#pythran export sech(float64[])
def sech(x):
    arg = numpy.exp(-x)
    return 2.0*arg/( 1.0 + (arg*arg) )
