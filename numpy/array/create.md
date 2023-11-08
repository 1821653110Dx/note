# np.zero
```python
import numpy as np

# create zero_array, (row, column) = (1, 5),type = float
x = np.zeros(5)

# create zero_array, (row, column) = (1, 5) type = int
y = np.zeros((5,))

# create (0,0)_array, (row, column) = (2,2)
z = np.zeros((2,2), dtype = [('x', 'i4'),('y', 'i4')])

# print
print(f'{x}\n{y}\n{z}')
```
# np.ones
```python
import numpy as np

# create one_array, (row,column) = (1,5),type = float
x = np.ones(5)

# create one_array, (row,column) = (2,2), type = int
y = np.ones([2,2], dtype = int)

print('{}\n{}'.format(x,y))
```
# np.zeros\_like
```python
```
