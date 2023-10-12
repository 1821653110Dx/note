# Create Classes
```python
class Point :	# custom a class called 'Point'
	def draw(self) :	# def a method of Point: draw(), the function of this method :	; draw(self) equivalent to draw() can't be replaced with draw(), 
		print('draw')	

a = Point()	# the class of a is Point
a.draw()		# let a use the draw() of its class
```
# Constractors
```python
class Point :
	def __init__(self, x, y)	:	# def the arttibutes of Point: x, y
		self.x = x + 3	# the value of attribute x = x + 3
		self.y = y + 6
	def draw(self) :	# def a method of Point: draw(), the function of this method :
		print(f'Point({self.x, self.y})')		# print the value of attribue x and attribute y

point = Point(1, 2)	# the class of point is Point, Point(1 ,2) = Point(x, y)

print(point.x)	# print the value of attribute x of point
point.draw()	# let point use the draw() of its class
```
