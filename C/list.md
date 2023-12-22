# multi-dim array
```c
/* import modules : stdio*/
#include<stdio.h>
int main()	// def main
{
	int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} } ;	// def a = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8} }, int, array[5][2], autodel	// array[5][2] : an array of 5 row and 2 col
	int i,j ;	// def i,j = null, int, var, autodel

	for ( i = 0 ; i < 5 ; i++)	// set row scope : [0, 4], current row is represented by 'i'
	{
		for ( j = 0 ; j < 2 ; j++ )	// set {ol scope : [0, 1], current col is represented by 'j'
		{
			printf("a[%d][%d] : %d\n",i,j,a[i][j]) ;	// do the following for every item in (row, col) : print"a[{i}{j} : {a[i][j]}\n"{i,j,a[i][j]:%d}
		}
	}

	return 0 ; // exit 
}
```
# transit array to func
```c
/* import modules: stdio.h */
#include<stdio.h>

/* decalre func to call: getAverage */
double getAverage(int arryp[], int size) ;

int main()	// def main
{
	int balance[] = {1000, 2, 3, 17, 50} ;	// def balance : {1000, 2, 3, 17, 50}, int, ls[], autodel
	double avg ;	// def avg : null, double, var, autodel

	avg = getAverage( balance, 5 ) ;	// {get average value of every item in 'balance': call getAverage( balance, 5 )}, save it to 'avg'
	
	printf("average value : %f", avg) ;	// print"average value : {avg}"{avg:%f}

	return 0 ;	// exit
}

double getAverage(int arry[], int size)	// def func getAverage : return = double, argument = [arry[], size], default_value = [null, null], type = [int, int]
{
	int i ;		// def i : null, int, var, autodel	// autodel : current quantity's scope is within the current func and will be autodel
	double average ;	// def average : null, double, var, autodel
	double sum = 0 ;	// def sum : 0, double, var, autodel

	for ( i = 0 ; i < size ; i++)	// set {col : i} scope of 'arry' : [0, size)
	{
		sum += arry[i] ;	// save SUM(all items in [1, col]) to 'sum'
	}

	average = sum/size ;	// save {sum / size} to 'average'

	return average ;	// return {average}
}
```
# return arry from func
```c
/* imoport modules: stdio.h stdlib.h time.h*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int* getRandom()	// def func getRandom  : return = pointer_int, argument = null
{
	static int r[10] ;	// def_local r : {}, int, ls[10], static(global to current file)
	int i ;		// def_local i : null, int, var, autodel

	srand( (unsigned)time(NULL)) ;	// set random_seed to sys_time

	for (i = 0 ; i < 10 ; i++)	// i in [0, 10), difference = 1. do the internal for each 'i'
	{
		r[i] = rand() ;		// get a random in [0, RAND_MAX defined in stdlib.h) ; save it to 'r[i]'
		printf("r[%d] = %d\n",i,r[i]) ;		// print"r[{i}] = {r[i]}\n"{i, r[i]:%d}
	}
	
	return r ;	// return {r}
}

int main()	// def main
{
	int* p ;	// def p : null, pointer_int, var, autodel
	int i ;		// def i : null, int, var, autodel

	p = getRandom() ;	// {get a list with random numbers: call getRandom()} ; save addr of the list to 'p'
	
	for (i = 0 ; i < 10 ; i++)		// i in [0, 10), difference = 1. do the internal for each 'i'
	{	
		printf("*(p + %d) : %d\n", i, *(p + i)) ;	// print"*(p + {i}) : {item at index'i' at addr saved in 'p': *(p + i)}\n"{i, *(p + i) : %d}
	}

	return 0 ;	// exit
}

```
# ptr toward arry
```c
/* import modules : stdio.h */
#include <stdio.h>

int main()	// def main
{
	double balance[5] = {100.0, 2.0, 3.4, 17.0, 50.0} ;	// def balance : {100.0, 2.0, 3.4, 17.0, 50.0}, double, ls[5], autodel
	double* p ;	// def p : null, ptr_double, var, autodel
	int i ;	// def i : null, int, var, autodel

	p = balance ;	// save addr of 'balance' to 'p'

	printf("get item of 'balance' by accessing addr saved in 'p'\n") ;	// print"get item of 'balance' by accessing addr saved in 'p'\n"

	/* print all items of 'balance' */
	for (i = 0 ; i < 5 ; i++)	// set {col:i}_index : [0, 5) . do the internal for each col_index
	{
		printf("*(p + %d) : %f\n",i, *(p + i)) ;	// print"*(p + {i}) : {item at index'i' at addr saved in 'p': *(p + i)}\n"{i:%d, *(p + i):%d}
	}

	printf("get item of 'balance' by accessing its addr\n") ;	// print"get item of 'balance' by accessing its addr\n"

	/* print all items of the 'balance' */
	for (i = 0 ; i < 5 ; i++)	// set {col: i}_index : [0,5). do the internal for each col_index
	{
		printf("*(balance + %d) : %f\n", i, *(balance + i)) ;	// print"*(balance + {i}) : {item at index'i' at addr of 'balance' : *(balance + i)}\n"{i:%d, *(balance + i):%f}
	}

	return 0 ;	// exit
}

```
