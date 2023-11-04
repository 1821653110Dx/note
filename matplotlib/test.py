import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


fig = plt.figure()	 

ax = Axes3D(fig)	# create a 3D axes in figure: 'fig', save the axes in 'ax'

X = np.arange(-4, 4, 0.25)	# X coordinate value: a array, its range: [-4,4), step: 0.25
Y = np.arange(-4, 4, 0.25)
X,Y = np.meshgrid(X, Y)		# create bottom meshgrid with (X,Y), and transform X,Y into scalar标量

R = np.sqrt(X**2 + Y**2)
Z = np.sin(R)	# Z coordinate value:

ax.plot_surface(X,Y,Z,rstride=5, cstride=5, cmap=plt.get_cmap('rainbow'))	# creata plot of 3D_axes saved in 'ax' by (X,Y,Z), attributes: (1) for each color_block, length in x_axis(rstride) = 1, length in y_axis (cstride) = 1, colormap = 'rainbow'

plt.show()

