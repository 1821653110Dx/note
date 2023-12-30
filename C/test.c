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
