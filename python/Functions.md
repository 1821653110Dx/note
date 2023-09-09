# Custom Functions
## Not Return a value
### normal
```python
def greet() :	// define a function : greet()
	print('Hi there')	// function include: print 'Hi there'

greet()
```
#### Arguments参数
```python
def greet(first_name, last_name) :	// define a function : greet(first_name, last_name)
	print(f"Hi {first_name} {last_name}")

greet('Mosh', 'Hamedani')	// run greet(first_name,last_name), first_name = 'Mosh', last_name = 'Hamedani'
greet('John', 'Smith')
```
## Return a value
```python
def get_greeting(name) :
	return f"Hi {name}"

message = get_greeting("Mosh")	// message = the return value of get_greeting("Mosh")
```
```python
def increment(number, by = 1) : // define a function : increment(number, by), argument by = 1 by default(the valuse of by can be changed);  arguments with default values must be set at the end
	return number + by 

print(increment(number = 2))	// print the return value of increment(number = 2), among which increment(number= 2) = increment(number = 2 , by = 1)G
print(increment(2,5))	// print the value of increment(2,5), where 2 is the value of argument number and 5 is the value of argument by
```
# \*arg, wait, what
```python
def multiply(*numbers) :	// define a function called multiply(*numbers), argument of which is a list 
	total = 1	// total_0 equals 1
	for number in numbers :		// number = [*numbers] 
		total *= number		// total = total_0 * number_0 * number_1 * ... * number_F (number_F = number_Final, number_Final is the last element of numbers)
	return total	// return the value of the function; multiply(*numbers) = total

print(multiply(2, 3, 4, 5))
```
# \*\*args
```python
def save_user(**user) : 	// define a function called save_user(**user), argument of which is a dictionary that can save different kinds of data
	print(user)

save_user(id=1, name='John', age=22) 
```
