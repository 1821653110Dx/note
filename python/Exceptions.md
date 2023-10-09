# Handling Exceptions
```python
# 0
try :	# run the following code
	age = int(input('Age: ')) # may happen ValueError; ValueError: the type of value is wrong 
	xfactor = 10 / age	# may happen ZeroDivisionError; ZeroDivisionError : happen /0
except ValueError as ex :	# ex = the exactly ValueError, if happening 'ValueError' during code_running, only run the following for this code_block next
	print("You didn't enter a valid age")	
	print(ex)
	print(type(ex))
except ZeroDivisionError :	# if happening ZeroDivisionError during code_running, only run the following for this code_block next except part corresponding to 'finally'
	print('Age cannot be 0')
else :	# otherwise, run the rest of this code_block
	print('No exceptios were thrown')
# 1
try :
	file = open('app.py')	# open file 'app.py'
	age = int(input('Age:'))
	xfactor = 10 /age
except (ValueError, ZeroDivisionError) :	# if happening 'ValueError' and 'ZeroDivisionError' during code_runing, only run the following for this code_block next except part corresponding to 'finally'
	print("You didn't enter a valid age")
else :
	print('No exceptios were thrown')
finally :	# finally, run the following
	file.close()	# close file responding to 'file'
