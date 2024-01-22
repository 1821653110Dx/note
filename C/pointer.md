# definition
mem addr
# save & fetch
```c
/* import modules: stdio.h */
#include<stdio.h>

int main()	// def main
{
	int var = 20 ;	// def var : 20, int, var, auto
	int* ip = NULL ;	// def ip : null, int*, var, auto	// for pointer, if value = NULL, better indicate "pointer = NULL"

	ip = &var ;	// 'ptr' points to 'var'	OR	save {'var'.addr: &var} to 'ip'

	/* print 'var'.addr */
	printf("var.addr : %p\n", &var) ;	// print"var.addr : {&var}\n"{~:pointer}

	/* print the addr of 'var' that 'ptr' points to */
	printf("the addr of 'var' that 'ptr' points to : %p\n", ip) ;	// print"the addr of 'var' that 'ptr' points to : {ip}\n"{~:%p}
	
	/* print the value of 'var' that 'ptr' points to */
	printf("the value of 'var' that 'ptr' points to: %d\n", *ip) ;	// print"value saved at the addr saved in ip : {*ip}\n"{~:%d}

	return 0 ;	// exit
}
```
# calc
## pointer points to next addr
```c
/* import modules: stdio.h */
#include<stdio.h>

const int MAX = 3 ;	// def MAX : 3, int, const, global

int main()	// def main
{
	int var[3] = {10, 100, 200} ;	// def var : {10, 100, 200}, int, ls[3], auto
	int i ;	// def i : null, int, var, auto
	int* ptr = NULL ;	// def ptr : null, int*, var, auto

	ptr = var ;	// 'ptr' points to {var[0]}	OR	// save {addr of 1st items of 'var'} to 'ptr'
	
	/* print every item of 'var' and its addr */
	for (i = 0 ; i < MAX ; i ++)	// {index of var:i} in [0, MAX). for each i
	{
		printf("addr:var[%d] = %p\n", i, ptr) ;		// print"addr:var[{i}] = {ptr}\n"{i:%d, ptr:%p}
		printf("item:var[%d] = %d\n", i, *ptr) ;	// print"item:var[{i}] = {*ptr}\n"{i:%d, *ptr:%d}

		ptr++ ;		// 'ptr' points to next item
	}

	return 0 ;	// exit
}
```
## pointer points to previous addr
```c
/* import modules: stdio.h */
#include<stdio.h>

const int MAX = 3 ;	// def MAX : 3, int, const, global

int main()	// def main
{
	int var[3] = {10, 100, 200} ;	// def var : {10, 100, 200}, int, ls[3], auto
	int i ;	// def i : null, int, var, auto
	int* ptr = NULL ;	// def ptr : null, int*, var, auto

	ptr = &var[MAX-1] ;	// 'ptr' points to var[0]	OR	// save {addr of last item of 'var'} to 'ptr'

	/* print every item of 'var' and its addr */
	for (i = MAX - 1; i >= 0 ; i--)		// {index of var:i) from {MAX-1} to 0(include). for each i
	{
		printf("addr:var[%d] = %p\n", i, ptr) ;		// print"addr:var[{i}] = {ptr}\n"{i:%d, ptr:%p}
		printf("item:var[%d] = %d\n", i, *ptr) ;	// print"item:var[{i}] = {*ptr}\n"{i:%d, *ptr:%d}

		ptr-- ;		// 'ptr' points to previous item
	}

	return 0 ;	// exit
}
```

## compare
```c
/* import modules : stdio.h */
#include<stdio.h>

// def MAX : 3, int, const, global
const int MAX = 3 ;

int main() // def main
{
	int var[3] = {10, 100, 200} ;	// def var : {10, 100, 200}, int, ls[3], auto
	int i ;		// def i : null, int, var, auto
	int* ptr = NULL ;	// def ptr : null, int*, var, auto

	ptr = var ;	// 'ptr' points to {var[0]}

	i = 0 ;		// set i = 0
	
	while ( ptr <= &var[MAX-1] )	// while {the item 'ptr' points to} < var[MAX-1], do the internal. Otherwise, next step
	{
		printf("addr:var[%d] = %p\n",i,ptr) ;	// print"addr:var[{i}] = {ptr}\n"{i:%d,ptr:%p}
		printf("item:var[%d] = %d\n",i,*ptr) ;	// print"item:var[{i}] = {*ptr}\n"{i,*ptr:%d}

		i++ ;	// switch to previous var
		ptr++ ;	// 'ptr' points to next item
	}

	return 0 ;	// exit
}
```
