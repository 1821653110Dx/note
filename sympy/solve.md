# solve $x^2 - x = 0$
```python
from sympy import *

x = symbols('x')

# define eq: equation, x**2 - x = 0
eq = Eq(x**2 - x, 0)

# define solve: solve of 'eq'
solve = solveset(eq, x, domain = S.Reals)

print(solve)
```
