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
