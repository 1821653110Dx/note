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
