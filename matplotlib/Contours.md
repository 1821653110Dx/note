```python3
import matplotlib.pyplot as plt
import numpy as np

def f(x,y) :	# define the Z_value function: f(x,y)
	return (1 - x/2 - x**5 + y**3)	* np.exp(-x**2 - y**2)

n = 256		# the number of (x,y) = 256, save it in 'n'
x = np.linspace(-3,3,n)		# generate 'n' values in [-3, 3), save it in 'x'
y = np.linspace(-3,3,n)

X,Y = np.meshgrid(x,y)	# calculate (x, y) of meshgrid of point_map of 'x ,y', and save them into 'X, Y'

C = plt.contour(X,Y,f(X,Y),8,colors='black',linewidth=.5)	# generate meshgrid: (X,Y,Z)=X,Y,f(X,Y), number_of_lines: 2+8, color='black', linewidth=0.5 . Link the meshgrid to 'C'
plt.contourf(X,Y,f(X,Y),8,alpha=0.75,cmap=plt.cm.hot)	# fill the meshgrid: (X,Y,Z) = X,Y,f(X,Y), number_of_filling_blocks: 2+8, alpha: 0.8, colormap: hot

plt.clabel(C, inline=True, fontsize=10)	# generage labels of the contour of 'C', label's position: inline, fontsize=10

plt.xticks(())
plt.yticks(())

plt.show()
```
