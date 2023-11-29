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

	do	/* do internal cmd */
	{
		printf("the value of a is %d\n",a) ;	/* print "the value of a is {a}\n"{a:decimal} */

		a = a + 1 ;	/* rewrite 'a' with {a+1} */
	}while(a <= 20); /* while 'a' < 20, continue. Otherwise, next step */

	return 0 ;	/* exit */
}
```
# nested loops
## search all prime-numbers in [2,100)
```c
/* includc */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int i, j ;	/* def i, j = null, int, var, autodel */	

	/* print all prime-numbers in [2,100) */
	for(i = 2; i < 100; i++)	/* for each {int:stored in 'i'} in [2, 100), the difference between every int == 1, */
	{
		for(j = 2; j <= (i/j); j++)	/* for each {factor:stored in 'j'} in [2, {current int}], the difference between every factor == 1, */
		{	
			if(!(i%j)) break ;	/* if i%j == 0, then next step */
		}

		if(j > (i/j))	printf("%d is print-number\n",i) ;	/* if factor > (i/j), then print "{i} is prime-number\n"{i:decimal} */
	}

	return 0 ; /* exit */
}
```
## Yanghui's triangle, numericla
```c
/* include */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int i, j ;	/* def i, j = null, int, var, autodel */	
	
	i = 1 ;		/*begin with row {1 : stored in i}*/
	while(i <= 5)		/* while {the serial number of current row} <= 5, do internal cmd. Otherwise, next step  */
	{
		j = 1 ;		/* begin with the col {1 : stored in j}, */
		while(j <= i)		/* while {the serial number of current col} <= {the serial numer of current row} */
		{	
			printf("%d",j) ;	/* print "{the serial number of current col}"{j:decimal} */

			j++ ; /* next col */
		}

		printf("\n") ;	/* print "\n" */

		i++ ;	/* next row */
	}

	return 0 ; /* exit */
}
```
## Yanghui's triangle, *
```c
/* include */
#include<stdio.h>	/*include stdio.h */

/* def main */
int main()	/* def main */
{
	int i, j ; 	/* def i, j = null, int, var, autodel */

	i = 1 ;		/* begin with the row {1:stored in 'i'}, */

	do	 /* do internal cmd */
	{
		j = 1 ;		/* begin with the col {1:stored in 'j'} */

		do	/* do internal cmd */
		{	
			printf("*") ;	/* print "*" */
			j++ ;	/* next col */
		}while(j <= i) ; 	/* while {the serial num of current col} <= {the serial num of current row}, continue */

		i++ ;		/* next row */

		printf("\n") ;		/* print "\n" */
	}while(i <= 5) ;	/* while {the serial num of current row} <= 5, continue. Otherwise, next step */

	return 0 ;	/* exit */
}

```
# loop control statement
## break
```c
// include
# include <stdio.h>	// include stdio.h

// def main
int main()	// def main
{
	int a = 10 ;	// def a = 10, int, var, autodel

	while( a < 20 )	// while {a} < 20, do internal cmd. Otherwise, next step
	{
		printf("the value of a is %d\n",a) ;		// print "the value of a is {a}\n" {a:%d}
		
		a++ ;	// {a} += 1

		if ( a > 15 )	// if {a} > 15
		{
			break;	// break the loop at this lv
		}
	}

	// exit
	return 0 ;
}
```

## continue
```c
// include
#include <stdio.h>	// include stdio.h

// def main
int main ()	// def main
{
	int a = 10 ;	// def a = 10, int, var, autodel

	do // do internal cmd
	{
		if( a == 15 )	// if a == 15
		{
			a++ ;	// {a} += 1

			continue ;	// next loop at this lv
		}

		printf("the value of a is %d\n",a) ;	// print "the value of a is {a}\n" {a:%d}

		a++ ;	// {a} += 1
	}while(a < 20);	// while {a} < 20, continue. Otherwise, next step

	// exit
	return 0 ;
}
```

## goto
```c
// include
# include <stdio.h>	// include

// def main
int main()	// def main
{
	int a = 10 ;	// def a = 10, int, var, autodel

	LOOP: do	// do internal cmd.	label: LOOP
	{
		if ( a == 15 )	// if a == 15
		{
			a += 1 ;	// a += 1

			goto LOOP ;	// goto LOOP
		}

		printf("the value of a is %d\n",a) ;	// print "the value of a is {a}\n"{a:%d}
		
		a++ ;	// a += 1
	}while(a < 20);	// while a < 20, continue. Otherwise, next step

	return 0 ;	// exit
}
```

