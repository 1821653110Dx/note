/* include */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int i, j ; 	/* def i, j = null, int, var, autodel */

	i = 1 ;		/* begin with the row {1:stored in 'i'}, */

	do	 /* do cmd in {} */
	{
		j = 1 ;		/* begin with the col 1:stored in 'j' */

		do	/* do cmd in {} */
		{	
			printf("*") ;	/* print "*" */
			j++ ;	/* next col */
		}while(j <= i) ; 	/* while {the serial num of current col} <= {the serial num of current row}, continue to do */

		i++ ;		/* next row */

		printf("\n") ;		/* print "\n" */
	}while(i <= 5) ;	/* while {the serial num of current row} <= 5, continue to do */

	return 0 ;	/* exit */
}
