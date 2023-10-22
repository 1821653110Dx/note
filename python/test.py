class Animal :
	def __init__(self) :	# def the attributes of 'Animal' :
		self.age = 1	# age = 1

	def eat(self) :
		print('eat')

class Mammal(Animal) :	# custom a class called 'Mammal', which will inherite all the methods of 'Animal' and inherite all the attributes of 'Animal' if the class won't def attributes
	def __init__(self) :	# def attributes : 
		self.weight = 2
		super().__init__()	# inherite attributes of 'Animal'

	def walk(self) :
		print('walk')

class Fish(Animal) :
	def swim(swim) :
		print('swim')

m = Mammal()	# the class of m is 'Mammal', whose atrrbutes are constant

m.eat()	# use eat() of 'm'
print(m.age)	# print the value of attribute 'age' of 'm'
print(m.weight)
