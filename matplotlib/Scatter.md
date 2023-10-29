```python
import matplotlib.pyplot as plt
import numpy as np

n= 1042 # number of scatter_points 

X = np.random.normal(0, 1, n)	# X = n random numbers with normal distriburion整态分布 in [0 ,1) 
Y = np.random.normal(0, 1, n)

T = np.arctan2(Y,X)	# generate color for scatter_points corresponding to X  and scatter_points corresponding to Y

plt.scatter(X, Y, s=75, c=T, alpha=0.5)	# generate scatter_point_img, its scatter points: scatter_points corresponding to X, scatter_points corresponding to Y, color = T,  alpha=0.5

plt.xlim((-1.5, 1.5))
plt.ylim((-1.5, 1.5))

plt.xticks(())	# hide all ticks of x axis
plt.yticks(())

plt.show()
```
