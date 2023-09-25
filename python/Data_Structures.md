# Lists
```Python
letters = ['a', 'b', 'c']
matrix = [[0, 1], [2, 3]]	# matrix, a 2 dimensional list
zeros = [0] * 5		# [0] is a list, so zeros is a list that contains five 0
conbined = zeros + letters	# zeros is a list, so conbined is a list that contains all elements of zeros and letters
numbers = list(range(20))	# number = a list that containes a list of number from 0 to 20-1
chars = list("Hello World")	# chars = a list that contains every characters of 'Hello World'

print(len(chars))	# print the length of list chars; print the number of elments of list chars
```
# Accessing Items 访问列表元素
```python
letters = ['a', 'b', 'c', 'd']
letters[0] = "A" 	# exchange letters[0] with A 

print(letters[0])	# print the position 0 item of letters
print(letters[-1])	# print the 1st-last item of letters
print(letters[: 3])	# print the first 3 items of letters
print(letters[1:3])	# print items from position 1 to position 3-1
print(letters[1:-1])	# print items from position 1 to position -1-1(2nd-last)
```
```python
numbers = list(range(20))

print(numbers[::2])	# print every 2nd item of numbers
print(numbers[::-1])	# print all the items of numbers, but in reverse order
```
# Unpacking Lists
## method 1 (the number of varables before the '= numbers' must equal to the number of the items of numbers)
```python
numbers = [1, 2, 3]
first, second, third = numbers	# equivalent to :
				# 	first = numbers[0]
				#	second = numbers[1]
				#	third = numbers[2]

```
## method 2 (the number of varables before the '= numbers' don't necessarily equal to the number of items of numbers)
```python
# situation 1
numbers = [1, 2, 3, 4, 4, 4, 4, 4, 4]
first, second, *other = numbers	# other = numbers[2:]
print(first, second)

# situation 2
numbers = [1, 2, 3, 4, 4, 4, 4, 4, 4]
first, *other, last = numbers	# first = numbers[0]
				# last = numbers[-1]
				# other = number[1:-2]

print(first, last)
print(other)
```
# Looping over Lists
```python
letters = ['a', 'b', 'c']

for index, letter in enumerate(letters) :	# index = [0, 1, 2], letter = ['a', 'b', 'c'] 
	print(letter)	# print all index and letter
```
# Adding/Removing items
```python
letters = ['a', 'b', 'c']

# Add
letters.append('d')	# add a item at the end
letters.insert(0,'-')	# insert - at position 0+1

# Remove a item
letters.pop()	# remove the item at the end of the list
letters.pop(0)	# remove the item at position 0+1
letters.remove('b')	# remove the first occurence of b

# remove a range of items
del letters[0:3]	# delete the items from index 0 to index 3-1

# remove all the items
letters.clear()
```
# Finding Items
```python
letters = ['a', 'b', 'c']

print(letters.count('d'))	# letters.count('d') = the number of occurances of d in letters

if 'd' in letters :	# if d exists in letters, then
	print(letters.index('a'))	# letters.index('a') = the index of a

```
# Sorting Lists
## basic
```python
numbers = [3, 51, 2, 8, 6]

numbers.sort() # sort numbers in ascending order升序, numbers will be changed
numbers.sort(reverse=True)	# sort numbers in descending order, numbers will be changed
sorted(numbers)		# sorted numbers in ascending order, numbers will not be changed
sorted(numbers, reverse=True)
```
## topple
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]


items.sort(key=lambda item: item[1])	# sorted items in ascending order by item[1], item[1]

print(items)
```
# Map Function
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

x = map(lambda item: item[1], items)	# x = map映射 containing column 1 of litems

for item in x : 	# item = a list, values of which = map x
	print(item)	# print every item of list 'item'
```
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

prices = list(map(lambda item: item[1], items))		# prices = a list, value of which = map containing column 1 of items

print(prices)
```
# Filter Function
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

filtered = list(filter(lambda item: item[1] >= 10, items))	# filtered = a list, value of which = map containing column 1 of items

print(filtered)
```
# List Comprehension
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

prices = [item[1] for item in items]	# prices = a list containing column  1 of topple items

filtered = [item[1] for item in items if item[1] >= 10]	# filtered = a list containg all items >= 10 of column 1 of topple items
```
# zip function
```python
list1 = [1, 2, 3]
list2 = [10, 10, 10]

print(list(zip(list1, list2, 'abc')))	# print a list with column 0, column 1, column 2 respectively = list1, list2, ['a', 'b', 'c']

zip(list1, list2)
```
# Stacks
```python
browsing_session = []
browsing_session.append(1)	# append '1' at the end of list browsing_session = append 'a' on the top of stack browsing_session
browsing_session.pop()		# remove item at the end of list browsing_session = remove item on the top of stack browsing_session
browsing_session[-1]	# git the item on the top of browsing_session
if not browsing_session :	# if empty for stack browsing_session
	print('empty')
```
# Queues
```python
from collections import deque	# for deque, every item is continuous in memory; for list, every item is not continuous in memory

queue = deque([])	# queue = an empty deque
queue.append(1)		# append '1' at the end of queue
queue.append(2)
queue.append(3)
queue.popleft()		# remove item at position 0
if not queue :
	print(queue)
```
# Tuples元组
```python
point = (1, 2, 3)	# tuple point = (1, 2)
Point = (1, 2) + (3, 4)	# tuple Point = (1, 2, 3, 4)
ppoint = (1, 2) * 3	# tuple ppoint = (1, 2, 1, 2, 1, 2)
pppoint = tuple([1, 2])	# tuple ppoint = (1, 2)
p4oint = tuple('hello world')	# p4oint = ('h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd')

x, y, z = point		# x = position 0 item of point, and 'y and z' are the same（y和z同理）

if 10 in point :
	print('exists')

print(point[0:2])
```
# Swapping Variables
```python
x = 10
y = 11

z = x	##
x = y	  ## swap the values of x and y
y = z	##

x, y = y, x	# swap the values of x and y
```
# Arrays
```python
from array import array

number = array('i', [1, 2, 3])	# array number = ('i', [1, 2, 3])

number[0]
number.append(0)	# for array, the type of the item you append must be the same as the type of the last item
number.pop()
number[0] = 'a'		# for array, when metting this situdation, the type of the item before '=' must be the same as the type of the item after '='
```
# Sets
 we can not fetch the items of a set, so we can't write the following code :  
 	print(set[0])
```python
numbers = [1, 1, 2, 3, 4]
first = set(numbers)		# 'first' = a set equivalent to 'numbers' with no duplicates 重复的元素
second = {1, 5}		# set 'second' = {1, 3}

print(first | second)	# the type of 'first' and 'second' is set, so print a new set, items of which are the union 并集 between two sets and the union dosen't contain duplicates
print(first & second)	# the type of 'first' and 'second' is set, so print a new set, items of which are the intersection 交集 between two sets
print(first - second)	# the type of 'first' and 'second' is set, so print a new set, items of which are the difference 差集 between two sets 
print(first ^ second)	# the type of 'first' and 'second' is set, so print a new set, items of which are the symmetry difference between two sets

if 1 in first :
	print('yes')
```
# Dictionaries
```python
point = {'x':1, 'y':2}	# dictionary 'point' = {'X':1, 'y',2}
point_0 = dict(x=1, y=2)	# dictionary 'point_0' = {'x':1, 'y':2}
point['x'] = 10		# 'point' includes key 'x',key 'x' of 'point' = 10
point['z'] = 20		# 'point' doesn't include key 'z', append 'z':10 to 'point'

if 'a' in point :	# if 'a' in 'point', then
	print(point['a'])	# print the value of key 'a' of 'point'

print(point.get('a', 0))	# print 0 if 'a' not in 'point', otherwise, print the value of 'a' of point

del point['x']	# remove 'x' and its value from 'point'

for key in point :	# key = ['x', 'y']
	print(key, point[key])	# print every key and its value in point

for x in point.items()	# x = {('x', 1), ('y', 2)}
	print(x)	# print every x
```
