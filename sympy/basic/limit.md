# $\lim_{x \to 0} \frac{sin(x)}{x}$
```python
from sympy import *

x = symbols('x')

lim = limit(sin(x)/x, x,0)

print(lim)
```
# $\lim_{x \to 0^+} \frac{1}{x}$
```python
from sympy import *

x = symbols('x')

lim = limit(1/x, x,0,'+')

print(lim)
```
