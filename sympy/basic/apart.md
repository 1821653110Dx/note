# apart $\frac{4*x**3 + 21*x**2 + 10*x +12}{x**4 + 5*x**3 + 5*x**2 + 4*x}$
```python
from sympy import *

x = symbols('x')

frac = (4*x**3 + 21*x**2 + 10*x + 12)/(x**4 + 5*x**3 + 5*x**2 + 4*x)
frac_apart = apart(frac)

print(frac_apart)
```
