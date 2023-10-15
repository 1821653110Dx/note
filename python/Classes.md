# class
## define method
```python
class Point :	# custom a class called 'Point'
	def draw(self) :	# def a method of Point: draw(), the function of this method :	; draw(self) equivalent to draw() can't be replaced with draw(), 
		print('draw')	

a = Point()	# the class of a is Point
a.draw()		# use the draw() of a
```
## define attributes
```python
class Point :
	default_color = 'red'	# define the attribute default_color, value of which is 'red'
	def __init__(self, x, y) :	# def the arttibutes of Point: x, y
		self.x = x + 3	# the value of attribute x = x + 3
		self.y = y + 6
	def draw(self) :	# def a method of Point: draw(), the function of this method :
		print(f'Point ({self.x}, {self.y})')		# print Point ({the value of attribute x}, {the value of attribute y})

Point.default_color = 'yellow'	# init the value of attribute 'default_color' of class 'Point' to 'yellow'
point = Point(1, 2)	# the class of point is Point, Point(x, y) of point = Point(1, 2)

print(point.x)	# print the value of attribute x of point
print(point.default_color)
print(Point.default_color) # print the value of attribute default_color of class Point
point.draw()	# use the draw() of point
```
## define classmethod
```python
class Point :
	def __init__(self, x, y) :
		self.x = x
		self.y = y

	@classmethod	# the type of following methods to define is classmethod
	def zero(cls) :	# def classmethod zaeo(), function is the following :
		return cls(0 ,0)	# init the arttibues' value to (0, 0)

point = Point.zero()	# the class of point is Point, use classmethod zero()
```
## define magic method
```python
class Point :
	def __init__(self, x, y) :
		self.x = x
		self.y = y
	def __str__(self) :	# define introduction of the current variable
		return f'({self.x}, {self.y})'	# return attributes' value of the current variable

point = Point(1, 2)

print(point)	# the class of point is customed, so print the introduction of the viriable 
```
## Comparing Objects of customed class
```python
class Point :
	def __init__(self, x, y) :
		self.x = x
		self.y = y
	
	def __eq__(self, other) :	# define criteria标准 for variable equalty for variables of this class
		return self.x == other.x and self.y == other.y	# For two variables, if values of attribue x are eq and values of attributes y are eq, then two variables are eq 
	
	def __gt__(self, other) :	# define criteria for greater_than and less_than
		return self.x > other.x and self.y > other.y
a = Point(1, 2)
b = Point(1, 2)
c = Point(0, 0)

print(a == b)	# print whether a == b
print(a > c)
print(a < c)
```




