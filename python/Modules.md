# Modules
module are file that contains python code
```python
# 1
from sales import calc_shippling, calc_tax	# sales.py is in current directory, import class 'calc_shipping' and class 'calc_tex' from module 'sales'
calc_shipping()	# call imported class 'calc_shipping' 

# 2
import sales	# import module 'sales' in current directory
sales.calc_tax()	# call class 'calc_tax' from imported module 'sales'
```

# Compiled Python Files
after run a .py containing head files, there will be .pyc in current path, .pyc is used to accelerate loading head files

# Module Search Path
```python
print(sys.path)	# print the path of module 'sys'
```
# Packages
- pakcage is a initialized directory to store modules  
- In order to initialize a directory as a packge, you need to add a empty '__init__.py' in the directory

```python
# 1
import ecommerce.sales	# import module 'sales' of package 'ecommerce' in current directory

ecommers.sales.calc_tax()	# call class 'calc_tax' in module 'sales' of package 'ecommers'

# 2
from ecommerce.sales import calc_tax	# import class 'calc_tax' from modlue 'sales' of package 'commerce' in current directory

calc_tax()	# call imported class 'calc_tax'

# 3 
from ecommerce import sales	# import module 'sales' of package 'ecommerce' in current directory

sales.calc_tax	# call class 'calc_tax' from imported module 'sales'
```

# Subpackages
```python
from ecommerce.shopping import sales	# import module 'sales'  from subpackage 'shopping' of package 'ecommerce' in current directory
```

# Intra-package References
```python
from ..customer import contact	# import module 'contact' from subpackge 'customer' in previous directory
```

# The dir() Function
```python
from ecommerce.shoppling import sales

print(dir(sales))	# print the features of module 'sales'
