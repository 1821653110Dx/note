
#include <stdio.h>

extern int count ;

void writ_extern(void)	/* def function 'write_extern', no argument, no return */
{
	printf("count is %d",count) ;	/* print "count is {count}" {count:double} */
}
