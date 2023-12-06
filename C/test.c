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
