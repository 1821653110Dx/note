```python
import matplotlib.pyplot as plt
import numpy as np

# create image date
a = np.array([0.31366, 0.36534, 0.42373,			# create a 3*3 array, and save it to a: ([0.31366, 0.36534, 0.42373,
		0.36534, 0.43959, 0.52508,			#					0.36534, 0.43959, 0.52508,
		0.42373, 0.52508, 0.65153]).reshape(3,3)	#					0.42373, 0.52508, 0.65153])

# generate the image
plt.imshow(a, interpolation='nearest', cmap='bone', origin='upper')	# generate a pixel image with the data of 'a'

plt.colorbar()

plt.xticks(())
plt.yticks(())
plt.show()
```
