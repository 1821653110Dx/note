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

print(letters[0])	// print the position 0+1 item of letters
print(letters[-1])	// print the 1st-last item of letters
print(letters[: 3])	// print the first 3 items of letters
print(letters[1:3])	// print items from position 1+1 to position 3
print(letters[1:-1])	// print items from position 1+1 to 2nd-last
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
