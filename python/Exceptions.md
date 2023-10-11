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

# with statement
try :
	with open('app.py') as file, open('another.txt') as target :	# if file = open('app.py') AND target = open('another.txt') successful, then run the following and colse the 'app.py' AND 'another.txt' after the code_block is finished
		print('file opened')
	age = int(input('Age:'))
	xfactor = 10 /age
except (ValueError, ZeroDivisionError) :		
	print("You didn't enter a valid age")
else :
	print('No exceptios were thrown')

# handle exception without exception_code
def calculate_xfactor(age) :
	if age <= 0 :
		return None	# stop running the rest code of the function and the function won't return a valid value
	return 10 /age

xfactor =  calculate_factor(-1)

if xfactor == None :	# if xfactor don't have a vaild value
	pass	# stoping running the whole code	
```
