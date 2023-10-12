# Create Classes
```python
class Point :	# custom a class called 'Point'
	def draw(self) :	# def method draw(), the function of this method :	; draw(self) equivalent to draw() can't be replaced with draw(), 
		print('draw')	

a = Point()	# the class of a is Point
a.draw()		# a.draw = use the function of function draw()
```
# Constractors
```python
class Point :
	def _init_(self, x, y)	:	# def attributes : x and y,
		self.x = x	# attribute x = x
		self.y = y
	def draw(self) :	# def method draw(), the function of this method :
		print(f'Point({self.x, self.y})')		# print the value of attribue x and attribute y
point = Point(1, 2)	# the class of point is Point. Point(1 ,2) = Point(x, y), so the attribute of point is x and y 

print(point.x)	# print the value of attribute x of point
point.draw()
```
