from pathlib import Path

path = Path('ecommerce/')

paths = [p for p in path.iterdir()]	# paths  = a list of lv.1 subpaths of 'path'
print(paths)

print(5*'---')

paths = [p for p in  path.iterdir() if p.is_dir()]	# paths = a list of lv.1 subpaths of 'path', and each subpath is dir

py_files = [ p for p in path.glob('*.py')]	# py_files = a list of '*.py' under 'path'

py_files_r = [p for p in path.rglob('*.py')]	# py_files_r = a list of '*.py' under 'path' and its subpaths

print(paths,'\n')
print(py_files,'\n')
print(py_files_r)	




