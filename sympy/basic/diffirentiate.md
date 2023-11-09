# $sin'x$
```python
from sympy import *

x = symbols('x')

f = cos(x)
f_diff = diff(f, x)

print(f_diff)
```
# $[x^4]'''$
```python
from sympy import *

x = symbols('x')

f = x**4
f_diff = diff(f, x, 3)

print(f_diff)
```
