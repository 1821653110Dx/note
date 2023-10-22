import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-3, 3, 50)
y1 = 2*x +1
y2 = x**2

plt.figure()
plt.plot(x, y1, label='up')	# generate plot of y1 with x as variable, whose label = 'up'
plt.plot(x, y2, label='down')

plt.legend()	# show all labels
plt.show()





