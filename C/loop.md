# loop
## while
```c
/* include */
#include <stdio.h>	/* include stdio.h*/

/* def main */
int main()	/* def main */
{
	int a = 10 ;	/* def a = 10, int, var, autodel */
	
	/* 'a' < 20 and a = a + 1, print every "the value of a is {a}\n"{a:decimal} corresponding to each 'a' */
	while(a < 20)	/* 'a' < 20 */
	{
		printf("the value of a is %d\n",a) ;	/* print every "the value of a is {a}\n"{a:decimal} corresponding to each 'a' */	

		a++ ;	/* a = a + 1 */
	}

	return 0 ;	/* exit */
}
```
## for
```c
/* include */
# include <stdio.h>	/* include */
/* def main */
int main()	/* def main */
{
	/* def a = 10, int, var, autodel. 'a' < 20 and a = a + 1, print every "the value of a is {a}\n" {a:decimal} corresponding to each a */
	for(int a = 10; a < 20; a += 1)	/* def a = 10, int, var, autodel. 'a' < 10 and a = a + 1 */
	{
		printf("the value of a is %d\n",a) ;	/* print every "the value of a is {a}\n" {a:decimal} corresponding to each 'a' */
	}

	return 0 ;	/* exit */
}
```
## do while
```c
/* include */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 10 ;	/* def a = 10, int, var, autodel */

	do	/* if still meet the condition after doing cmd, continue to do */
	{
		printf("the value of a is %d\n",a) ;	/* print "the value of a is {a}\n"{a:decimal} */

		a = a + 1 ;	/* rewrite 'a' with {a+1} */
	}while(a <= 20); /* condition: 'a' < 20, not run break and continue */

	return 0 ;	/* exit */
}
```
# loop control statement
