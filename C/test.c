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
