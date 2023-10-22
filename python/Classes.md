# class
## define method
```python
class Point :	# custom a class called 'Point'
	def draw(self) :	# def a method of Point: draw(), the function of this method :	; draw(self) equivalent to draw() can't be replaced with draw(), 
		print('draw')	

a = Point()	# the class of a is Point, which doesn't have attributes
a.draw()		# use the draw() of a
```
## define attributes
```python
class Point :
	default_color = 'red'	# define the attribute default_color, value of which is 'red'
	def __init__(self, x, y) :	# def the arttibutes of Point: x, y
		self.x = x + 3	# the value of attribute x = x + 3
		self.y = y + 6
	def draw(self) :	# def a method of Class Point: draw()
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

	@classmethod	# ready to create a classmethod
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
## Supporting Arithmetic Operations
```python
class Point :
	def __init__(self, x, y) : 
		self.x = x
		self.y = y
	
	def __add__(self, other) :	# def the creterion for addition
		return Point(self.x + other.x, self.y + other.y) # For two variables, addition = add the values of attribute x of two variables, add the values of attribute y of two variables

a = Point(10, 20)
b = Point(1, 2)

# to print the sum of attribute x of a and b
sum = a + b	# store the sum of attribute x of 'a+b' and sum of attribute y of 'a+b'
print(sum.x)	# print(sum) only return the address	
```
## Custom Containers
```python

class TagCloud :	# define a container class, which is a dictionary class : TagCloud
	def __init__(self) :	# define the attributes of Point : dictionary tags
		self.tags = {}
	
	def add(self, tag) :	# def a method of class TagCloud: add(tag)
		self.tags[tag.lower()] = self.tags.get(tag.lower(), 0) + 1 # if the key lowercased 'tag' not in dictionary 'tags' , add lowercased key 'tag' into dictionary and the value of lowercased key 'tag' = 0. the value of lowercased key 'tag' of dictionary 'tags' =  the value of lowercased key 'tag' + 1
	def __getitem__(self, tag) : # define the creterion for getting lowercased item, item:  tag
		return self.tags.get(tag.lower(), 0)	# if lowercased key 'tag' not in dictionary 'tags', add the lowercased key 'tag' into the dictionary and its value = 0. get the value of lowercased key 'tag' in dic 'tags'.
	
	def __setitem__(self, tag, count) : # define the creterion for setting the getted lowercased item, item: lowercased 'tag', its value: count
		self.tags[tag.lower()] = count	# get the lowercased key 'tag' of dic 'tags', set its value to 'count'
	
	def __len__(self) :	# def the creterion for getting the length of container
		return len(self.tags)

	# def __iter__(self) : 	## def the creterion for geting one item at a time
	#	return iter(self.tags)

cloud =  TagCloud()

cloud.add('Python')	# the class of cloud is a customed dictionary class, so if lowercased key 'Python' not in the attribute, then add lowercased key 'Python' into the attribute of cloud and its value = 0, otherwise the value of lowercased key 'Python' + 1
cloud.add('python') 
cloud.add('python') 

cloud['Python'] = 10	# get the lowercased key 'Python' of dic 'tags', set its value to '10'; its related creterion def are '__getitem__' abd '__setitem__'

len(cloud)	# it  related creterion def is '__len__'

print(cloud.tags)	# print the value of attribute tags of cloud, which is a dictionary 

```
## Properties
### have the same without using Properties
```python
class Product :
	def __init__(self, price) :	# define the attribute : __price(PRIVATE 'price'), which can't be directly getted or setted
		self.set_price(price)	# define the attribute by calling function set_price

	def get_price(self) :	# define a method to get the value of __price : get_price
		return self.__price	# return the value of __price

	def set_price(self, value) :	# define a method to correctly set the __price : set_price(value)
		if value < 0 :	# if value < 0, then
			raise ValueError('Price cannot be negative') # raise a ValueError called 'Price cannot be negative'
		self.__price = value	# otherwise, __price == value

product = Product(50)
```
### have the same result with properties
```python
class Product :
	def __init__(self, price) :	# define the attribute: __price
		self.price = price	# __price = price
	
	@property	# ready to create a property
	def price(self) :	# def a property called 'price'
		return self.__price # use .price to get the value of __price 

	@price.setter	# use .price to set the value of __price
	def price(self, value) :	# def the creteria for setting the __price
		if value < 0 :	
			raise ValueError('Price cannot be negative') 
		self.__price = value 
	
product = Product(50)	# the class of product is Product, the value of __price is 50

product.price = 1  # set the value of __price of 'product' to -1

print(product.price)	# print the value of 'product'
```
## inheritance
```python
class Animal :
	def __init__(self) :	# def the attributes of 'Animal' :
		self.age = 1	# age = 1

	def eat(self) :
		print('eat')

class Mammal(Animal) :	# custom a class called 'Mammal', which will inherite all the methods of 'Animal' and inherite all the attributes of 'Animal' if the class won't def attributes
	def __init__(self) :	# def attributes : 
		self.weight = 2
		super().__init__()	# inherit attributes of 'Animal'(why add this line: becase I def attributes of the class just now, so the class won't automaticly inherite the attributes)

	def walk(self) :
		print('walk')

class Fish(Animal) :
	def swim(swim) :
		print('swim')

m = Mammal()	# the class of m is 'Mammal', whose atrrbutes are constant

m.eat()	# use eat() of 'm'
print(m.age)	# print the value of attribute 'age' of 'm'
print(m.weight)
```
