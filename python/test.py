
class TextBox() :
	def draw(self) :
		print('TextBox')

class DropDownList():
	def draw(self) :
		print('DropDownList')

def draw(controls) :	# def function 'draw()', its variable: list controls, its function : 
	for control in controls :	# for every control in list controls
		control.draw()	# use 'draw()' of TextBox/DropDownList

a = DropDownList()	# the type of class of a = customed 'DropDownList'
b = TextBox()

draw([a, b])	# use function draw(), its variables : [a, b]
