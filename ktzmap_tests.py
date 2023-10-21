import time
import datetime
import numpy
import modules.SimulacaoKTz as simKTz
#import SimulacaoKTzC as simKTzC
import matplotlib.pyplot as plt

#t_tran  = 0
#t_total = 1500
#x = simKTz.RodaSimulacaoMapa(0.6,0.35,0.001,0.001,-0.5,0.0,t_tran,t_total,[-0.6971564118917724,-0.6971564118917724,-0.022748704865822533],'KTzTanh')
#
#t = numpy.arange(t_tran,t_total+1)
#plt.plot(t,x[:,0])
#plt.show()
#
#
#t_tran  = 0
#t_total = 1500
#x = simKTz.RodaSimulacaoMapa(0.6,0.25,0.001,0.001,-0.2,0.0,t_tran,t_total,[-0.6971564118917724,-0.6971564118917724,-0.022748704865822533],'KTzLog')
#
#t = numpy.arange(t_tran,t_total+1)
#plt.plot(t,x[:,0])
#plt.show()


#start_exec_time = time.monotonic()
#for i in range(10):
#    simKTzC.RodaSimulacao_Varios_H(0.0,1.0,0.0,0.0,0.0,numpy.logspace(-7,0,100,base=10),1000,10000,[1e-8,1e-8],'KTTanh',False,0.3,10)
#end_exec_time = time.monotonic()
#print("* End of simulation... Total time: {}".format(datetime.timedelta(seconds=(end_exec_time-start_exec_time)/10.0)))

#start_exec_time = time.monotonic()
#for i in range(10):
#    simKTz.RodaSimulacao_Varios_H(0.0,1.0,0.0,0.0,0.0,numpy.logspace(-7,0,100,base=10),1000,10000,[1e-8,1e-8],'KTTanh',False,0.3,10)
#end_exec_time = time.monotonic()
#print("* End of simulation... Total time: {}".format(datetime.timedelta(seconds=(end_exec_time-start_exec_time)/10.0)))

## 100 valores de 10**(-7) ateh 10**0
t_tran   = 1000
t_total  = 10000
H_values = numpy.logspace(-7,0,100,base=10)
xm,x_var,x_var_std,x_suscept = simKTz.RodaSimulacao_Varios_H(0.0,1.0,0,0,0,H_values,t_tran,t_total,[1e-8,1e-8],'KTTanh',False,0.3,10)

fig,ax = plt.subplots(nrows=1,ncols=2)
ax[0].plot(H_values,xm)
ax[0].set_xscale('log')
ax[0].set_yscale('log')
ax[0].set_xlabel('H')
ax[0].set_ylabel('m')
if not numpy.all( numpy.isinf(x_suscept) ):
    ax[1].plot(H_values,x_suscept)
    ax[1].set_xscale('log')
    ax[1].set_yscale('log')
    ax[1].set_xlabel('H')
    ax[1].set_ylabel(r'$\chi$')
else:
    print('*** warning: only inf values for susceptibility... are you on the critical line T=1-K ?')
plt.show()

