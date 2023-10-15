
class Point :
	def __init__(self, x, y) :
		self.x = x
		self.y = y
	
	def __eq__(self, other) :	# define criteria标准 for variable equalty for variables of this class
		return self.x == other.x and self.y == other.y	# For two variables, if values of attribue x are eq and values of attributes y are eq, then two variables are eq 
	
	def __gt__(self, other) :	# define criteria for greater_than
		return self.x > other.x and self.y > other.y
a = Point(1, 2)
b = Point(1, 2)
c = Point(0, 0)

print(a == b)	# print whether a == b
print(a > c)
print(a < c)
