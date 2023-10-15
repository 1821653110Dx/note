import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-1, 1, 50)
y1 = 2*x + 1
y2 = x**2

plt.figure(num=1)	# the following images will be showed in figure 1
plt.plot(x, y1, color='red', linewidth=1.0, linestyle='--')	# generate a image of function y1 with x as variable, color = red, linestyle='--'

plt.figure(num=2)	# the following images will be showed in figure 2
plt.plot(x, y2)	# generate a image of function y2 with x as variable

plt.figure(num=3)
plt.plot(x, y1)
plt.plot(x, y2)

plt.show()	# show all figures
