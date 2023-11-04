```python
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-1, 1, 50)
y1 = 2*x + 1
y2 = x**2

plt.figure(num=1)	# the image will be showed in figure 1
plt.plot(x, y1, color='red', linewidth=10, linestyle='--')	# generate a plot with (x, y1), color = red, linestyle='--'

plt.figure(num=2)	# the following plots will be showed in figure 2
plt.plot(x, y2)	# generate a plot with (x, y2)

plt.figure(num=3)
plt.plot(x, y1)
plt.plot(x, y2)

plt.show()	# show all figures
```
