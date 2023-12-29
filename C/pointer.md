# definition
mem addr
# basic use
```c
/* import modules: stdio.h */
#include<stdio.h>

int main()	// def main
{
	int var = 20 ;	// def var : 20, int, var, autodel
	int* ip ;	// def ip : null, int*, var, autodel

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
