# line
```python
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-1, 1, 50)	# for x, generate 50 values ranging from -1 to 1
y = 2*x + 1	# define 'y' as '2*x +1'

plt.plot(x, y)	# generage image of function 'y' with 'x' as variable, it will be showed in figure 1
plt.show()	# show all figures
```
# curve
```python
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-1, 1, 50)
y = x**2

plt.plot(x, y)
plt.show()
```
