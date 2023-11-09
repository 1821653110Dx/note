# expand $(x + 1)^2$
```python
from sympy import *

x = symbols('x')

f = (x+1)**2

f_ex = expand(f)

print(f_ex)
```
