/* include */
#include <stdio.h>	/* include stdio.h */

/* def main function */
int main()	/* def main(), return.dty = int : */
{
	const int LENGTH = 10 ;	/* def LENGTH: 10, int, const */
	const int WIDTH = 5 ;	/* def WIDTH: 5, int, const */
	const char NEWLINE = '\n' ;	/* def NEWLINE: '\n', char, const */
	int area ;		/* def area: $sym, int */	

	area = LENGTH * WIDTH ;		/* return {LENGTH * WIDTH}, save the data to 'area' */
	
	printf("value of area : %d", area) ;	/* print "value of area : {area}" [area = double] */
	printf("%c",NEWLINE) ;	/* print "{NEWLINE}" [NEWLINE = char] */

	return 0 ;	/* exit */
}

