import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('datos.txt')
datosi = np.loadtxt('datos_i.txt')

plt.figure()
plt.plot(datosi[:,0], datosi[:,1], label = 'cond inicial')
plt.plot(datos[:,0], datos[:,1], label = 'evolucion')
plt.legend()
plt.title('Difusion')
plt.savefig('difusion.pdf')
