# def
```c
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0} ;	// def balance = {1000.0, 2.0, 3.4, 7.0, 50.0}, double, ls[], autodel	// ls[] : a non-empty list
double balance = {} ;	// def balance = {}, double, ls[5], autodel
double salary = balance[4] ;	// def salary = balance[4], double, var, autodel
``` 
# fetch items
```c
/* import modules: stdio.h */
#include <stdio.h>

int main()	// def main
{
	int n[10] ;	// def n = {}, int, ls[10], autodel	// ls[10] = an empty list whose size = 10
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
# fetch length
## without macro def
```c
/* import modules: stdio.h */
#include<stdio.h>

int main()	// def main
{
	int array[] = {1, 2, 3, 4, 5} ;		// def array = {1, 2, 3, 4, 5}, int, ls[], autodel
	int length = sizeof(array)/sizeof(array[0]) ;	// def length = {the length of 'array[]': sizeof(array)/sizeof(a:wrray[0]) }, int, var, autodel
	
	printf("the length of the list = %d\n",length) ;	// print "the length of the list = {length}\n"{length:%d}

	return 0 ;	// exit
}
```
## with macro def
```c
/* import modules: stdio.h */
#include<stdio.h>

#define LENGTH(array) sizeof(array) / sizeof(array[0])	// macro_def LENGTH(array) : sizeof(array) / sizeof(array[0])

int main()	// def main
{
	int array[] = {1, 2, 3, 4, 5} ;		// def array : {1, 2, 3, 4, 5}, int, ls[], autodel
	int length = LENGTH(array) ;	// def length : {the length of 'array' : macro 'LENGTH(array)'}, int, var, autodel

	printf("the length of the array = %d\n",length) ;	// print "the length of the array = {length}\n"{array:%d}

	return 0 ;	// exit
}
```

## fetch the address
```c
int myArray[5] = {10, 20, 30, 40, 50} ;
int* ptr = myArray ;	// def ptr : {the address of 'myArray'}, int_ptr, var, autodel
```

## fetch item
```c
/* import modules: stdio */
#include<stdio.h>

void printArray(int arry[], int size)	// def func printArray : return = void, argument = [arry[], size], default_value = [null, null], type = [int, int]
{
	for (int i = 0 ; i < size ; i++)	// def i : 0, int, var, autodel ; i < {size} and i = i + 1. do the inernal for each i	// set col_scope : {size}
	{
		printf("%d ",arry[i]) ;		// print"{arry[i]} "{%d}	// print all items of the scope, delimeter = space
	}
}

int main()	// def main
{
	int myArray[] = {10, 20, 30, 40, 50} ;	// def myArray : {10, 20, 30 40, 50}, int, ls[], autodel

	printArray(myArray, 5) ;	// {print every item of 'myArray': call printArray(myArray, 5)}
	
	return 0 ;	// exit
}
```
