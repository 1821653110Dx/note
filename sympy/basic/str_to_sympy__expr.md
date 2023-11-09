```python
from sympy import *

# define 'expr': variable

expr = symbols('expr')

# define str_expr: string =  ~
str_expr = 'x**2 + 2*x + 1'

expr = sympify(str_expr)	# sympify /= simplify !!!

print(expr)
```
