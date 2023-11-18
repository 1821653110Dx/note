
#include <stdio.h>	/* include stdio.h */

int count ;	/* def count: $sym, int, el_execution=common */
extern void write_extern() ;	/* declare external var: count, int */

/* def main() */
int main()	/* def main(), return.dty = int */
{
	count = 5 ;	/* save 5 to count */
	write_extern() ;	/* invoke declared write_extern */
}
