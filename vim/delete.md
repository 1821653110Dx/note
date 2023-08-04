# delete
```txt
single character after the cursor = x
~ before ~ = X

a word after the cursor = W
~ before ~ = B

a line = dd
multiple lines = [count]dd

delete contents in {} = di{
delete {} and contents in that =  da{
	// the same to [] () <> "" ''  

delete in visual mode
(1) normal visual mode(press v)
	delte all character after the cursor = $, d
	~ before ~ = 0, d
(2) row visual mode(press V)
	delete the selection = d
(3) column visual mode(C v)
	delete the selection = d
```
