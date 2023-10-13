class Point :
	def __init__(self, x, y) :
		self.x = x
		self.y = y
	
	@classmethod	# the type of following methods to define is classmethod
	def zero(cls) :	# def classmethod zaeo(), function is the following :
		return cls(0 ,0)	# init the arttibues' value to (0, 0)

point = Point.zero()	# the class of point is Point, use classmethod zero()
