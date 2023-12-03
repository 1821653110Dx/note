# def
```c
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0} ;	// def balance = {1000.0, 2.0, 3.4, 7.0, 50.0}, double, ls[5], autodel	// ls[5] : a list whose size = 5
double balance = {} ;	// def balance = {}, double, ls[5], autodel
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0} ;	//
double salary = balance[4] ;	// def salary = balance[4], double, var, autodel
``` 
# fetch items
```c
/* import modules: stdio.h */
#include <stdio.h>

int main()	// def main
{
	int n[10] ;	// def n = {}, int, ls[10], autodel
	int i,j ;	// def i,j = null, int, var, autodel
	
	/* def n[0] -> n[9] */
	for( i = 0; i < 10; i++ )	// 'i' in [0,10), each 'i' differs by 1. for each 'i' do the intermal cmd	// for n[0] -> n[9], do the internal cmd
	{
		n[i] = i + 100 ;	// save {{i} + 100} to n[i]
	}
	
	/* print {n[0] -> n[9]} */
	for( j = 0 ; j < 10 ; j++ )	// 'j' in [0,10), each 'j' differs by 1. for each 'j' do the internal cmd	// for n[0] -> n[9], do the internal cmd
	{
		printf("Element[%d] = %d\n",j,n[j]) ;	// print "Element[{j}] = {n[j]}\n"{n[j]:%d}
	}

	return 0 ;	// exit
}
```
