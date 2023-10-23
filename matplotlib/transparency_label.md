```python
import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-3, 3, 50)
y = 0.1*x

plt.figure()
plt.plot(x, y, color='red', lw=10, zorder=1)	# zorder=1 -> 1st last layer; To set label's transpareny, must set plot's zorder

plt.ylim(-2, 2)

ax = plt.gca()
ax.spines['right'].set_color('none')
ax.spines['top'].set_color('none')
ax.xaxis.set_ticks_position('bottom')
ax.yaxis.set_ticks_position('left')
ax.spines['bottom'].set_position(('data', 0))
ax.spines['left'].set_position(('data', 0))

for label in ax.get_xticklabels() + ax.get_yticklabels() :	# for each 'label' of [xticklabels, yticklabels]
	label.set_zorder(2)	# set label's layer to 2nd last; to set label's transparency , must set each label's  zorder and make sure it > plots' zorder
	label.set_fontsize(12)	# set label's fontsize to 12
	label.set_bbox(dict(facecolor='white', edgecolor='None', alpha=0.7))	# set background box of label: facecolor='white'(fill-color), dont't show box's edges, alpha = 0.7

plt.show()
```
