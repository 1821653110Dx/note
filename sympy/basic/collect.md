# collect $x*y + x - 3 + 2*x**2 - z*x**2 + x**3$
```python
from sympy import *

x, y, z = symbols('x y z')

f = x*y + x -3 +2*x**2 - z*x**2 + x**3
f_col = collect(f, x)	# def f_col: function = f, collect similar items according 'x'

print(f_col)
```
