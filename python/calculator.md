# number
```python
170/ 3 # classic division returns a float
17 // 3 # floor divcision discards the fractional part

17 % 3 # returns the remainder of the division

5 ** 2 # 5 squared
2 ** 7 # 2 to the power of 7
```
```python
>>> tax = 12.5 / 100
>>> price = 100.50
>>> price * tax
12.5625
>>> price + _	# _ = 12.5625
113.0625
>>> round(_, 2)	# round to 2 decimal places保留2位小数 of _ 
```
# string
```python
>>> "\"Yes,\"they said"
"Yes", they said

>>> '"isn\'t",they said'
"isn't", they said

>>> print(r'C:\some\name')
C:\some\name

>>> print('''
... Usage: thingy [OPTIONS]
... 	-h
... 	-H hostname
... 	 ''')

Usage: thingy [OPTIONS]
	-h
	-H hostname


>>> 3 * 'un' + 'inum'
'unununinum'


>>> prefix = 'Py'
>>> prefix + 'thon'
'Python'


>>> word = 'Python'
>>> word[-1]	# last character
'n'
>>> word[0]	# first character
'P'
>>> word[0:2]	# characters from position 0 to position 2-1
'Py'
>>> word[:2]	# characters from the begining to position 2-1
'Py'
>>> word[4:]	# characters from position 4 to the end
'on'
>>> word[-2:]	# characters from 2nd last to the end
'on'
>>> word[:2] + word[2:]
'Python'
```
# list
```python
>>> a = [1, 4, 9, 16, 25]
>>> a[0]
1
>>> a[-1]
25
>>> a[-3:]
[9, 16, 25]
>>> a + [36, 49, 64, 61, 100]
[1, 4, 9, 16, 25, 36, 49, 64, 61, 100]

>>> b = [1, 8, 27, 65, 125]
>>> b[3] = 64	# replace the element of position 3 with 64
>>> b
[1, 8, 27, 64, 125]
>>> b.append[216]	# append 216 to b
[1, 8, 27, 64, 125, 216]

```


