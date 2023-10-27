# class
purpose: let a variable using customed methods and attributes
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
	def __init__(self, x, y) :	# def the arttibutes of Point, which includes: x, y
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
	
	def __eq__(self, other) :	# define criteria标准 for variable equalty for variables of this class(this is needed when you judge whether variabes are euqal because customed class Point isn't a data class and  doesn' inherit buil-in classes)
		return self.x == other.x and self.y == other.y	# For two variables, if values of attribue x are eq and values of attributes y are eq, then two variables are eq 
	
	def __gt__(self, other) :	# define criteria for greater_than and less_than(this is needed when judge which variable is bigger because customed class Point isn't a data class and  doesn' inherit buil-in classes)
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
	def __init__(self) :	# define the attributes, which includes : dictionary tags
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
	def __init__(self, price) :	# define the attributes, which inclueds : __price(PRIVATE 'price'), which can't be directly getted or setted
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
	def __init__(self, price) :	# define the attribute, which includes: __price
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
	def __init__(self) :	# def the attributes of 'Animal', which includes : constant age
		self.age = 1	# age = 1

	def eat(self) :
		print('eat')

class Mammal(Animal) :	# custom a class called 'Mammal', which will inherite all the freatures of 'Animal' if the class won't def attributes, if defed, it will inherit all the methods only
	def __init__(self) :	# def attributes : 
		self.weight = 2
		super().__init__()	# inherit attributes of 'Animal'(why add this line: becase I def attributes of the class just now, so the class won't automaticly inherite the attributes)

	def walk(self) :
		print('walk')

class Fish(Animal) :
	def swim(swim) :
		print('swim')

class MemoryStream(Stream) :


m = Mammal()	# the class of m is 'Mammal', whose atrrbutes are constant

m.eat()	# use eat() of 'm'
print(m.age)	# print the value of attribute 'age' of 'm'
print(m.weight)
```
## Multi-Level Inheritance(limited to 1 / 2 levels)
```python
class Animal :
	def eat(self) :
		print('eat')

class Bird(Animal) :
	def fly(self) :
		print('fly')

class chicken(Bird) :	# customed a class called : chicken, for features. chicken = Bird
	pass		#
```
## Multiple Inheritance
```python
class Employee :
	def greet(self) :
		print('Employee Greet')

class Person :
	def greet(self) :
		print('Person Greet')

class Manager(Employee, Person) :	
	pass	
	
manager = Manager()	# the class of 'manager' is 'Manager', which doesn't has attributes
manager.greet()	# call method 'greet()' of 'manager', but both 'Employee' and 'Person' have greet() and 'Employee' is infront of 'Person' at 'class Manager(Employee, Person)', so it will call the 'greet()' of 'Employee'

```
## A Good Example of Innheritance
```python
from abc import ABC, abstractmethod	# from abc, import class 'ABC', method 'abstractmethod'; abc module is used to reminder programmers which functions that haven't been fully built to complete  after the program has failed to run

class InvalidOperationError(Exception) :	# Customed a class called 'InvalidOperationError', which will inherite all the freatures of 'Exception'(system class) if the class won't def attributes
	pass	# now, for features, 'InvalidOperationError' = 'Exception'

class Stream(ABC) :	# customed a class called 'Stream' and it is not fullt built yet(it is abstruct)
	def __init__(self) :
		self.opened = False	# the statement of open is False by default 

	def open(self) :
		if self.opened :	# If opened, then : ;  If self.opened = True, then
			raise InvalidOperationError('Stream is already opened')	# automatically detect the type of error and raise it, then print '~'

		self.opened = True	# Otherwise, it is opended; Otherwise, self.opened = True


	def close(self) :
		if not self.opened :	# If not opened, then : ;  If self.opened /= True, then
			raise InvalidOperationError('Stream is already closed')

		self.opened = False	# Otherwise, it is not opended; Otherwise, self.opened = False
	
	@abstractmethod		# method read() haven't been started building yet(method read() is totally abstruct)
	def read(self) :	#
		pass		# 
	

class FileStream(Stream) :
	def read(self) :
		print('Reading data from a file')

class NetworkStream(Stream) :
	def read(self) :
		print('Reading data from a network')

class MemoryStream(Stream) :	# customed a class called : MemoryStream, for freatures, MemoryStream = Stream
	pass			#

stream = Stream()	# class 'Stream' is abstruct, so after you run the program you will see a type error, which means 'the class hasn't been fully built and you need to finish the constrcution of the class'

stream_1 = MemoryStream()	# because MemoryStream directly inherits all the features of 'Stream' and 'Stream' is abstruct, so after you run the program you will see a type error, which means 'the class hasn't been fully built and you need to finish the constrcution of the class'

stream.open()
```
# Duck Typing
```python
class TextBox :
	def draw(self) :
		print('TextBox')

class DropDownList:
	def draw() :
		print('DropDownList')

def draw(controls) :	# def function 'draw()', its variable: list controls, its function : 
	for control in controls :	# for every control in list controls
		control.draw()	# use 'draw()' of TextBox/DropDownList

a = DropDownList()	# the class of a = customed 'DropDownList'
b = TextBox()

draw([a, b])	# use function draw(), its variables : [a, b]

```
# Extending Built-in Types
let customed classes inherit built-in classes
```python
class Text(str) :	# custom a class called 'Text', which will inheirt all the features of built-in class 'stir'
	def duplicate(self) :
		return self + self	# duplicate its attribute value

class TrackableList(list) :	
	def append(self, object) :	# modify method 'append()' exsisted in the class, its variable: object, its function :
		print('Apend called')
		super().append(object)	# call the original append(object) for curent variable

text = Text('Python')	# the class of text is customed Text, its attribute = 'Python'

list =  TrackableList()

print(text.lower())	# print the lowercased attribute value of text : its class has inherited class 'str', so just call its method lower() , then print the value
print(text.duplicate())	# print the duplicate attribute value of text : call its method duplicate, and print the value

list.append('1')
```
# Data Classes
a better way to save numorous data
```python
from collections import namedtuple

Point = namedtuple('Point', ['x', 'y'])		# costomed class Point and it's a data class(which is used to store data), its data are value of x, y

p1 = Point(1, 2)	# the class of p1 is data class 'Point', it's data : the value of x, y, x, y = 1, 2
p2 = Point(1, 2)

p1 = Point(10, 2)	# change the value of attribute x of data class 'p1' to 10; this line can't be replaced with p1.x = 10

print(p1 == p2)		# p1 and p2 are data classes, you can judge whether they are equaly directly
```
