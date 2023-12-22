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

