/* include */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 10 ;	/* def a = 10, int, var, autodel */

	do	/*do cmd in {} when meeting the conditions */
	{
		printf("the value of a is %d\n",a) ;	/* print "the value of a is {a}\n"{a:decimal} */

		a = a + 1 ;	/* rewrite 'a' with {a+1} */
	}while(a <= 20); /* condition: 'a' < 20, not run break and continue */

	return 0 ;	/* exit */
}
