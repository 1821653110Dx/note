/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 1 ;	/* def a: 4, int, autodel */
	short b ;	/* def b: null, short, autodel */
	double c ;	/* def c: null, double, autodel */
	int* ptr ;	/* def pointer ptr: int, autodel ;	pointer is used to store 'memory address' */

	printf("the size of a is %lu\n",sizeof(a)) ;		/* print "the size of a is {sizeof(a)}\n" {sizeof(a):%lu} */
	printf("the size of b is %lu\n",sizeof(b)) ;	/* print "the size of b is {sizeof(b)}\n" {sizeof(b):%lu} */
	printf("the size of c is %lu\n",sizeof(c)) ;	/* print "the size of c is {sizeof(c)}\n" {sizeof(c):%lu} */

	ptr = &a ;		/* rewrite ptr with a.addr */

	printf("the value of a is %d\n",a) ;		/* print "the value of a is {a}\n" {a:decimal} */
	printf("the value of pointer ptr is %d\n",*ptr) ;	/* print "the value of pointer ptr is {*ptr}\n" {*ptr:decimal} */

	a = 10 ;	/* rewrite a with 10 */
	b = (a == 1) ? 20:30 ;		/* rewrite b with {if a == 1, then return 20; otherwise, return 30} */

	printf("the value of b is %d\n",b) ;	/* print "the value of b is {b}\n" {b:%d} */
		
	b = (a == 10) ? 20:30 ;	/* rewrite b with {if a == 10, then return 20; otherwise, return 30} */

	printf("the value of b is %d",b) ;	/* print "the value of b is {b}" {b:%d} */
	
	return 0 ;	/* exit */
}
