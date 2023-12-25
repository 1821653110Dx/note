```c
/* import modules : stdio.h */
#include<stdio.h>

enum DAY	// def enum_class : DAY
{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN	// members = [MON, TUE, WED, THU, FRI, SAT, SUN], value = [1,7]
};

int main()	// def main
{
	/* def enum_var day: WED, DAY*/
	enum DAY day ;
	day = WED ;

	printf("%d", day) ;	// print"{day}"{day:%d}
	
	return 0 ;	// exit
}
```
```c
```
