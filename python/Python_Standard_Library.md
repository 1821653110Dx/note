# Path
```python
# for windows
from pathlib import Path

Path(r'C:\Program FIles\Microsoft')

# for linux
from pathlib import Path

path = Path('ecommerce/__init__.py')	# path = path_object: ecommerce/__init__.py, which is equivallent to ./emmerce/__init__.py

path.exists()	# does path_object exists ?
path.is_file()	# is path_object a file ?
path.is_dir()	# is path obhect a directory ?


Path.home()	# return the home directory of current user

print(path)
print(path.name)	# print the name of object pointed by path
print(path.stem)	# name = stem.suffix
print(path.suffix)
print(path.parent)	# print the parent of path_object of 'path'

path = path.with_name('init.txt')	# path = noexsisted path_object: ecommerce/init.txt

print(path)

path = path.with_suffix('.py')	# path = noexsisted path_object: ecoomerce/init.py
```
