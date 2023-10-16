```python
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-3, 3, 50)
y1 = 2*x + 1
y2 = x**2

plt.figure()
plt.plot(x, y1, color='red', linewidth=1.0, linestyle='--')
plt.plot(x, y2)

plt.xlim((-1, 2))	# display range of x-axis: (-1, 2)
plt.ylim((-2, 3))
plt.xlabel('I am x')	# set label of x-axis as 'I am x'
plt.ylabel('I am y')	

ticks_1 = np.linspace(-1, 2, 5)	# set ticks_1(刻度1) = 5 ticks ranging from -1 to 2
plt.xticks(ticks_1)	# set the ticks of x-axis as ticks_1
plt.yticks([-2, -1.8, -1, 1.22, 3,],['really bad', 'bad', 'normal', 'good', 'really good'])	# for y axis, respectively set the ticks [-2, -1.8, -1, 1.22, 3,] as ['really bad', 'bad', 'normal', 'good', 'really good'])

plt.show()
```
