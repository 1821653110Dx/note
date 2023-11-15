/* include */
# include <stdio.h>				/* include stdio.h */

/* def external variables */
int x ;						/* def 'x': $sym, int */
int y ;						/* def 'y': $sym, int */

/* def funtion */
int addtwondum()				/* def function 'addtwondum()', return.dty = int :*/
{
	extern int x ;				/* invoke external variable: x */
	extern int y ;				/* invoke external variable: y */
	x = 1 ;					/* x = 1 */
	y = 2 ;					/* y = 2 */
	
	return x+y ;				/* return {x+y} */
}

/* def main function */
int main()					/* def main(), return.dty = int : */
{
	int result ;				/* def result: $sym, int */

	result = addtwondum() ;			/* invoke function 'addtwondum()', save the value to 'result' */

	printf("result is %d", result) ;	/* print "result is {result}" [result = double]*/

	return 0 ;				/* exit */
}
