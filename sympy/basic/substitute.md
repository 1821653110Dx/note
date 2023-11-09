# x = 0, cos(x)+1 = ?
```python
from sympy import *

# define x as a variable
x = symbols('x')

# define f: function = ~
f = cos(x) + 1

# culculate and save the value
result = f.subs(x, 0)

# display the value
print(result)
```
