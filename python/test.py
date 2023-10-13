class Point :
	default_color = 'red'	# define the attribute default_color, value of which is 'red'
	def __init__(self, x, y) :	# def the arttibutes of Point: x, y
		self.x = x + 3	# the value of attribute x = x + 3
		self.y = y + 6
	def draw(self) :	# def a method of Point: draw(), the function of this method :
		print(f'Point ({self.x}, {self.y})')		# print Point ({the value of attribute x}, {the value of attribute y})

point = Point(1, 2)	# the class of point is Point, Point(x, y) of point = Point(1, 2)

print(point.x)	# print the value of attribute x of point
print(point.default_color)
point.draw()	# use the draw() of point

