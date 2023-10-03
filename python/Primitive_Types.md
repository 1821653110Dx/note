# number
```python
students_count = 1000
ratting = 4.99

print(10 + 3)
print(10 - 3)
print(10 * 3)
print(10 / 3)	// 10 / 3 = float
print(10 // 3)	// 10 //3 = int
print(10 % 3)	// 10 % 3 = 10 modulo余 3
print(10 ** 3)	// 10 ** 3 = 10^3

print(round(2.9))	// round() = round off to the nearest integer四舍五入
print(abs(-2.9))
```
# math module
```python
import math

print(math.ceil(2.2))	// math.ceil(2.2) = return the smallest integer >= 2.2
```

# string
## formated string
```python
first = 'mosh'
last = 'hamedani'
full = f'{len(first)} {last}'
Full = f'{len(first)} {2+2}'

print(full)	// print {len{first} {last} 
print(Full)	// print {len(first)} {2+2}
```
## string method
```python
course = '  python programming'

print(course.upper()) // course.upper() = course that each letter is in uppercase
print(course.lower())
print(course.title())	// course.title() = course that each word starting with a capital letter
print(course.strip())	// course.strip() = course that has been removed comtent at the begining and end of the string, here content = white space
print(course.find('pro'))	// course.find('pro') = the index of the first letter of 'pro' 
print(course.replace('p','j'))	// course.replace('p','j')) = course that has been replaced all 'p' with 'j'
print('pro' in course)	// if 'pro' in course, pro' in course = True, else = Falth
print('swift' not in course)
```
# boolean
```python
is_published = True	// is_published = False
```

# excape sequences 转义字符
```python
\n
\'
\"
\\
```

```python
course = 'python \'programming'
print(course)	// print python 'programming
```

