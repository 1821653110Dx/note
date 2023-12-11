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
