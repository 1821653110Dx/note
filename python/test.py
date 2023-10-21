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
