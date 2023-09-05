# Comparision Operators比较运算符
```txt
>
>=
<
<=
==
!=
```
# Conditional Statements条件语句
```python
temperature = 35

if temperature > 30 :
	print("It's warm")
	print("Drink water")
elif temperature > 20 :
	print("It's nice")
else :
	print(print"It's cold")

print("Done")
```
# Ternary Operator三元运算符
```python
age = 22

message = 'Eligible' if age >= 18 else 'Not eligible'

print(message)
```
ex:
```txt
age equals 22
if age >= 18, then message equals 'Eligible'; Otherwise, message equals 'Not Eligible'
print the valuse of message
```
# LogicL Operators 逻辑运算符
```python
high_income = False
good_credit = True

if not student and (high_income or good_credit) :	// ~ = if student == False and (high_income == True or good_credit == True) :
	print('Eligible')
else :
	print('Not eligible')
```
ex:  
```txt
It's not high_income
It's good_credit

if not student and does (high_income or good_credit), then print 'Eligible'; Otherwise, print 'Not eligible'
```
# Chaining Comparison Operators链接比较运算符
```python
age = 22
if 18 <= age  < 65 :
	print('Eligible')
```
# For Loops
```python
for number in range(3) : 	// run 3 times
	print("Attempt", number + 1, (number + 1) * '·')
```
```python
for number in range(1, 4) :	 // run 4-1 times
	print("Attempt", number + 1, (number + 1) * '·')
```
```python
for number in range(1, 10, 2) :		 // number = [1, 3, 5, 7, 9], run 5 times
	print("Attempt", number + 1, (number + 1) * '·')
```
# For..Else
```python
successful = False	// does successful
for number in range(3) :	// number = [0, 1, 2] ,run 3 times	
	print('Attempt')	
	if successful :
		print('successful')
		break	// end this If code block
	else :
		print("Attempt 3 times and failed")	
```
# Nested Loops
```python
for x in range(5) :
	for  y in range(3) :
		print(f"({x}, {y})")
```
# Literables可数的
```python
for x in 'Python' :	// x = ['P', 'y', 't', 'h', 'o', 'n'], run the following 6 times
	print(x)
```
```python
for x in [1, ,2 ,3, 4] : 	// x = [1, 2, 3, 4], run the following 4 times
	print(x)
```
# While Loops
```python
number = 100

while number > 0 : 	// while number not > 0 OR run 'break', the loop ends
	print(number)
	number //= 2 
```	
```python
command = ''	// 'command' is empty

while command.lower() != 'quit' :	// while the lowercased command‘ value not != 'quite' OR run 'break', the loop ends
	command = input('>')	// print >, command = User Input
	print('ECHO', command)	// print ECHO the value of command
```
# Infinite Loops
```python
while True :	// run 'break', the loop ends
	command = input('>')
	print('ECHO', command)
	if command.lower() = 'quit' :
		break	// break the loop
```
