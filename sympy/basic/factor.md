# factorize  $x**3 - x**2 + x - 1$
```python
from sympy import *

x = symbols('x')

f = x**3 - x**2 + x - 1
f_fac = factor(f)

print(f_fac)
```
