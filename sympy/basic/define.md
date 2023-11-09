# define variable
```python
import sympy

# define x, y
x, y = symbols('x y')

# define x, x <- R, x>0
x = symbols('x', positive = True)

# define x_{1..5}
vars = symbols('x_1:5')

print(vars[0])	# print x_1
```

# define constant
```python
# define z = 1/2
z = Rational(1,2)
```
