# $\int cos(x)dx$
```python
from sympy import *

x = symbols('x')

int = integrate(cos(x), x)

print(int)
```
# $\int_{0}^{\infty} e^{-x} dx$
```python
from sympy import *

x = symbols('x')

int = integrate(exp(-x), (x, 0, oo))

print(int)
```
# $\int_{\infty}^{\infty}\int_{\infty}^{\infty} f(x,y) dxdy$
```python
from sympy import *

x, y = symbols('x y')

int = integrate(exp(-x**2 - y**2), (x, -oo, oo), (y, -oo, oo))

print(int)
```
