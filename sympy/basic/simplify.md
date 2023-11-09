# simplify $sin(x)^2+cos(x)^2$
```python
from sympy import *

x = symbols('x')

f = sin(x)**2 + cos(x)**2
f_sim = simplify(f)

print(f_sim)
```
# symplify $2sin(\alpha_{\mu})cos(\alpha_\mu))
```python
from sympy import *

alpha_mu = symbols('alpha_mu')

f = 2*sin(alpha_mu)*cos(alpha_mu)

f_sim = simplify(f)

print(f_sim)
```
