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

	ip = &var ;	// save {'var'.addr: &var} to 'ip'

	/* print 'var'.addr */
	printf("var.addr : %p\n", &var) ;	// print"var.addr : {&var}\n"{~:pointer}

	/* print the addr saved in 'ip' */
	printf("the addr saved in 'ip' : %p\n", ip) ;	// print"the addr saved in 'ip' : {ip}\n"{~:%p}
	
	/* print value saved at the addr saved in 'ip' */
	printf("value saved at the addr saved in ip : %d\n", *ip) ;	// print"value saved at the addr saved in ip : {*ip}\n"{~:%d}

	return 0 ;	// exit
}
```
# calc
## 
```c
/* import modules: stdio.h */
#include<stdio.h>

const int MAX = 3 ;	// def MAX : 3, int, const, global

int main()	// def main
{
	int var[3] = {10, 100, 200} ;	// def var : {10, 100, 200}, int, ls[3], auto
	int i ;	// def i : null, int, var, auto
	int* ptr = NULL ;	// def ptr : null, int*, var, auto

	ptr = var ;	// save 'var[]'.addr to 'ptr'
	
	/* print every item of 'var[]' and its addr */
	for (i = 0 ; i < MAX ; i ++)	// {index:i} of var[] in [0, MAX). for each index
	{
		printf("addr:var[%d] = %p\n", i, ptr) ;		// print"addr:var[{i}] = {ptr}\n"{i:%d, ptr:%p}
		printf("item:var[%d] = %d\n", i, *ptr) ;	// print"item:var[{i}] = {*ptr}\n"{i:%d, *ptr:%d}

		ptr++ ;		// 'ptr' points to next addr
	}

	return 0 ;	// exit
}
```
