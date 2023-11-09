# Eliminating the common factor of numerator and denominator
```python
from sympy import *

x = symbols('x')

f = (x**2 + 2*x + 1)/(x**2 + x)
f_can = cancel(f)

print(f_can)
``` 
