# Lists
```Python
letters = ['a', 'b', 'c']
matrix = [[0, 1], [2, 3]]	// matrix, a 2 dimensional list
zeros = [0] * 5		// [0] is a list, so zeros is a list that contains five 0
conbined = zeros + letters	// zeros is a list, so conbined is a list that contains all elements of zeros and letters
numbers = list(range(20))	// number = a list that containes a list of number from 0 to 20-1
chars = list("Hello World")	// chars = a list that contains every characters of 'Hello World'

print(len(chars))	// print the length of list chars; print the number of elments of list chars
```
# Accessing Items 访问列表元素
```python
letters = ['a', 'b', 'c', 'd']
letters[0] = "A" 	// exchange letters[0] with A 

print(letters[0])	// print the position 0 item of letters
print(letters[-1])	// print the 1st-last item of letters
print(letters[: 3])	// print the first 3 items of letters
print(letters[1:3])	// print items from position 1 to position 3-1
print(letters[1:-1])	// print items from position 1 to position -1-1(2nd-last)
```
```python
numbers = list(range(20))

print(numbers[::2])	// print every 2nd item of numbers
print(numbers[::-1])	// print all the items of numbers, but in reverse order
```
# Unpacking Lists
## method 1 (the number of varables before the '= numbers' must equal to the number of the items of numbers)
```python
numbers = [1, 2, 3]
first, second, third = numbers	// equivalent to :
				// 	first = numbers[0]
				//	second = numbers[1]
				//	third = numbers[2]

```
## method 2 (the number of varables before the '= numbers' don't necessarily equal to the number of items of numbers)
```python
# situation 1
numbers = [1, 2, 3, 4, 4, 4, 4, 4, 4]
first, second, *other = numbers	// other = numbers[2:]
print(first, second)

# situation 2
numbers = [1, 2, 3, 4, 4, 4, 4, 4, 4]
first, *other, last = numbers	// first = numbers[0]
				// last = numbers[-1]
				// other = number[1:-2]

print(first, last)
print(other)
```
# Looping over Lists
```python
letters = ['a', 'b', 'c']

for index, letter in enumerate(letters) :	// index = [0, 1, 2], letter = ['a', 'b', 'c'] 
	print(letter)	// print all index and letter
```
# Adding/Removing items
```python
letters = ['a', 'b', 'c']

# Add
letters.append('d')	// add a item at the end
letters.insert(0,'-')	// insert - at position 0+1

# Remove a item
letters.pop()	// remove the item at the end of the list
letters.pop(0)	// remove the item at position 0+1
letters.remove('b')	// remove the first occurence of b

# remove a range of items
del letters[0:3]	// delete the items from index 0 to index 3-1

# remove all the items
letters.clear()
```
# Finding Items
```python
letters = ['a', 'b', 'c']

print(letters.count('d'))	// letters.count('d') = the number of occurances of d in letters

if 'd' in letters :	// if d exists in letters, then
	print(letters.index('a'))	// letters.index('a') = the index of a

```
# Sorting Lists
## basic
```python
numbers = [3, 51, 2, 8, 6]

numbers.sort() // sort numbers in ascending order升序, numbers will be changed
numbers.sort(reverse=True)	// sort numbers in descending order, numbers will be changed
sorted(numbers)		// sorted numbers in ascending order, numbers will not be changed
sorted(numbers, reverse=True)
```
## topple
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]


items.sort(key=lambda item: item[1])	// sorted items in ascending order by item[1], item[1]

print(items)
```
# Map Function
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

x = map(lambda item: item[1], items)	// topple item[1] = column 1 of topple 'items', topple x = item[1]

for item in x : 	// list item = the value of topple x
	print(item)	// print every item of list 'item'
```
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

prices = list(map(lambda item: item[1], items))		// topple item[1] = column 1 of topple 'items', prices = a list that contains the items of topple item[1]

print(prices)
```
# Filter Function
```python
items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

filtered = list(filter(lambda item: item[1] >= 10, items))	// topple item[1] = all items that >=10 in column 1 of toople 'items', x = a list that contains the items of topple item[1]

print(filtered)



```
