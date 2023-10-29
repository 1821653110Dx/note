```python
import matplotlib.pyplot as plt
import numpy as np

n = 12

X = np.arange(n)

Y1 = (1-X/float(n))*np.random.uniform(0.5, 1.0, n)
Y2 = (1-X/float(n))*np.random.uniform(0.5, 1.0, n)

plt.bar(X, +Y1, facecolor='#9999ff', edgecolor='white')	# generate bars corresponding to each (X, +Y1)
plt.bar(X, -Y2, facecolor='#ff9999', edgecolor='white')

for x,y in zip(X, Y1) :	# for each (x, y) in (X, Y1)
	plt.text(x + 0.4, y + 0.05, '%.2f' % y, ha = 'center', va='bottom') # At (x + 0.4, y + 0.05), generate text: the value of y, its format: 2 devimal places , horizontal_alignment=center_of_bar, vertical_alignment=bottom_of_bar

for x,y in zip(X, Y2) :
	plt.text(x + 0.4, -y - 0.05, '-%.2f' % y, ha = 'center', va='top')	# '-%.2f' % y	--	the value of y, its format: negative, 2 decimal places

plt.xlim(-.5, n)
plt.ylim(-1.25, 1.25)

plt.xticks(())
plt.yticks(())

plt.show()
```
