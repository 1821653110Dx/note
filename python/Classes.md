# class
```python
# 1
class Point :	# custom a class called 'Point'
	def draw(self) :	# def a method of Point: draw(), the function of this method :	; draw(self) equivalent to draw() can't be replaced with draw(), 
		print('draw')	

a = Point()	# the class of a is Point
a.draw()		# use the draw() of a

# 2
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
