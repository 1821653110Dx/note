# if
```c
/* include */
# include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 10 ;	/* def a = 10, int, var, autodel */
	
	if(a < 20)	/* if a < 20 */
	{
		printf("a is less than 20\n");	/* print "a is less than 20 \n" */
	}

	printf("the value of a is %d",a) ;	/* print "the value of a is {a}" {a:decimal} */

	return 0 ;	/* exit */
}
```

# if ... else
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 100 ;	/* def a = 100, int, var, autodel */

	if(a < 20)	/* if a < 20 */
	{
		printf("a < 20\n") ;	/* print "a < 20\n" */
	}
	else	/* otherwise */
	{
		printf("a > 20\n") ;	/* print "a > 20\n" */
	}

	printf("a = %d",a) ;	/* print "a = {a}" [a:%d] */

	return 0 ;	/* exit */
}
```

# if ... else if ... else
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 100 ;	/* def a = 100, int, var, autodel */

	if(a == 10)	/* if a == 10 */
	{
		printf("a = 10\n") ;	/* print "a = 10\n" */
	}
	else if(a == 20)	/* or if a == 20 */
	{
		printf("a = 20\n") ;	/* print "a = 20\n" */
	}
	else if(a == 30)	/* of if a == 30 */
	{
		printf("a = 30\n") ;	/* print "a = 30\n" */
	}
	else	/* otherwise */
	{
		printf("Not Match\n") ;	/* print "Not Match\n" */
	}

	printf("the value of a = %d",a) ;	/* print "the value of a = {a}" {a:%d} */

	return 0 ;	/* exit */
}
```

# Nested if
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 100 ;	/* def a = 100, int, var, autodel */
	int b = 200 ;	/* def b = 200, int, var, autodel */

	if(a == 100)	/* if a == 100 */
	{
		if(b == 100)	/* if b == 100 */
		{
			printf("the value of a is 100, and value of b is 200\n") ;	/*print "the value of a is 100, and the value of b is 200\n" */
		}
	}

	printf("the value of a is %d\n",a) ;	/* print "the value of a is {a}\n"{a:%d} */
	printf("the value of b is %d",b) ;	/* print "the value of b is {b}"{b:%d} */

	return 0 ;	/* exit */
}
```

# switch
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	char grade = 'B' ;	/* def grade = 'B', char, var, autodel */

	switch(grade)	/* Switch what to do next according to 'grade' */
	{
		case 'A' :	/* if it == 'A' */
			printf("Great !\n") ;	/* print "Great !\n" */
			break ;		/* stop switching */
		case 'B' :	/* if it == 'B', then nothing */
		case 'C' :	/* if it == 'C' */
			printf("Nice Try !\n") ; /* print "Nice Try !\n" */
			break ;	/* stop switching */
		case 'D' :	/* if it == 'D' */
			printf("It's better to do it again.\n") ;	/* print "It's better to do it again.\n" */
				break ;		/* stop switching */
		case 'E' :	/*if it == 'E' */
			printf("valid grade\n") ;	/* print "valid grade\n" */
	}

	printf("your grade is %d",grade) ;	/* print "your grade is {grade}" {grade:decimal} */

	return 0 ;	/* exit */
}
```

# nested switch
```c
/* include */
#include <stdio.h>	/* include stdio.h */

/* def main */
int main()	/* def main */
{
	int a = 100 ;	/* def a = 100, int, var, autodel */
	int b = 200 ;	/* def b = 200, int, var, autodel */

	switch(a)	/* switch what to do next according to 'a' */
	{
		case 100 :	/* if a == 100 */
			printf("This is a part of external switch\n") ;		/* print "This is a part of external switch\n" */

			switch(b)	/* swicth what to do next accoding to 'b' */
			{
				case 200 :	/* if b == 200 */
					printf("This is a part of internal switch\n") ;	/* print "This is a part of internal switch\n"*/
			}
	}

	printf("the value of a is %d\n",a) ;	/* print "the value of a is {a}\n" {a:decimal} */
	printf("the value of b is %d\n",b) ;	/* print "the value of b is {b}" {b:decimal} */

	return 0 ;	/* exit */
}
```
