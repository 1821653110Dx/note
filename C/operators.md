# arithmetic operators
- remain %
- add-self ++
- sub-self --
## instances
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main() */
int main()	/* def main(), return int : */
{
	int a = 21 ;	/* def a: 21, int, autodeleted */
	int b = 10 ;	/* def b: 10, int, autodeleted */
	int c ;	/* def c: null, int, autodeleted */
	
	c = a++ ;	/* overwrite c with a, overwrite a with {a+1} */
	printf("the value of c is %d\n",c) ;	/* print "the value of c is {c}\n" {c:decimal} */
	c = a-- ;	/* overwrite c with a, overwite a with {a-1} */
	printf("the value of c is %d\n",c) ;	/* print "the value of c is {c}\n" {c:decimal} */
	c = ++a	;	/* overwrite a with {a+1}, overwirte c with a */
	printf("the value of c is %d\n",c) ;	/* print "the value of c is {c}\n" {c:decimal} */
	c = --a ;	/* overwrite 'a' with {a-1}, overwrite 'c' with 'a' */
	printf("the value of c is %d", c) ;	/* print "the value of c is {c}" {c:decimal}*/

	return 0 ;	/* exit */
}
```

# relational operators
- equal ==
- noequal !=
- greater equal >=
## instances
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main, return:int */
{
	int a= 21 ;/* def a: 21, int, autodeleted */
	int b = 21 ;/* def b: 10, int, sutodeleted */
	int c ;/* def c: null, int, autodeleted */

	if (a == b)/* if a == b */
	{
		printf("a = b\n") ;	/* print "a = b \n" */
	}
	else	/* otherwise */
	{
		printf("a != b\n") ;	/* print "a != b\n" */
	}

	if (a < b)	/* if a < b */
	{
		printf("a < b\n") ;	/* print "a < b\n" */
	}
	else	/* otherwise */
	{
		printf("a !< b\n") ;	/* print "a !< b\n" */
	}

	a = 5 ;	/* rewrite a with 5 */
	b = 20 ;	/* rewrite b with 20 */

	if ( a <= b )	/* if a <= b */
	{
		printf("a <= b\n") ; /* print "a <= b\n" */
	}
	else	/* otherwise */
	{
		printf("a !<= b") ;	/* print "a !<= b" */
	}

	return 0 ;	/* exit */
}
```

# logic operators
- && and
- || or
- ! not
## instances
```c
/* include */ 
#include <stdio.h>	/* include stdio.h */ 

/* def main */
int main()/* def main, return:int */ 
{ 
	int a = 5 ;	/* def a: 5, int, autodeleted */ 
	int b = 20 ;	/* def b: 20, int, autodeleted */ 
	int c ;/* def c: &sym, int, autodeleted */ 

	if ( a && b )	/* if a and b all True */ 
	{ 
		printf("True\n") ;	/* print "True\n" */ 
	} 

	if ( a || b )	/* if a or b True */
	{
		printf("True\n") ;	/* print "True\n" */
	}
	
	a = 0 ;	/* rewrite a with 0 */
	b = 10 ;	/* rewrite b with 10 */
	
	if ( a && b )	/* if a and b all True */
	{
		printf("True\n") ;	/* print "True\n" */
	}
	else	/* otherwise */
	{
		printf("False\n") ;	/* print "False\n" */
	}

	if ( !(a && b) )	/* if a and b !all True */
	{
		printf("True") ;	/* print "True" */
	}

	return 0;	/* exit */
} 
```
# bit operators
- &
	- * in bit operation
- | 
	- + in bit operation
- ^ 
	- (if same, then 0; otherwise, 1) in bit operation
- ~ 
	- (to 1, 1 to 0) in bit operation
- << 
	- * 2^n in decimal operation
- >> 
	- \ 2^n in decimal operation

## instances
```c
/* include */
# include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	unsigned int a = 60 ;	/* def a: 60, unsigned int, autodeleted */
	unsigned int b = 13 ;	/* def b: 13, unsigned int, autodeleted */
	int c = 0 ;	/* def c: 0, int, autodeleted */

	c = a & b ;	/* rewrite c with {a & b} */
	printf("value of c is %d\n",c) ;	/* print "value of c is {c}\n" {c:decimal} */
	c = a | b ;	/* rewrite c with {a | b} */
	printf("value of c is %d\n",c) ;	/* print "value of c is  {c}\n" {c : decimal} */
	c = a ^ b ;	/* rewrite c with {a ^ b} */
	printf("value of c is %d\n",c) ;	/* print "value of c is  {c}\n" {c : decimal} */
	c = ~a ;	/* rewrite c with {~a} */
	printf("value of c is %d\n",c) ;	/* print "value of c is  {c}\n" {c : decimal} */
	c = a << 2 ;	/* rewrite c with {a << 2} */
	printf("value of c is %d\n",c) ;	/* print "value of c is  {c}\n" {c : decimal} */
	c = a >> 2 ;	/* rewrite c with {a >> 2} */
	printf("value of c is %d\n",c) ;	/* print "value of c is  {c}\n" {c : decimal} */
		
	return 0 ;	/* exit */
}
```

# assignment赋值 operators
- +=
- -=
- \*=
- /=
- %=
- <<=
- >>=
- &=
- ^=
- |=

# miscellaneous杂项 operators
```c
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
```
