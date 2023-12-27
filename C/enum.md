# define
```c
/* import modules : stdio.h */
#include<stdio.h>

enum DAY	// def enum_class : DAY
{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN	// members = [MON, TUE, WED, THU, FRI, SAT, SUN], value = [1..7]
};

int main()	// def main
{
	/* def enum_var day: value = WED, class = DAY */
	enum DAY day ;
	day = WED ;

	printf("%d", day) ;	// print"{day}"{day:%d}
	
	return 0 ;	// exit
}
```
```c
/* import modules: stdio.h */
#include<stdio.h>

enum DAY	// def enum_calss : DAY
{
	MON = 1, TUE, WED, THU, FRI, SAT, SUN	// members = [MON, TUE, WED, THU, FRI, SAT, SUN], value = [1..7]
}day;	// declare var: day


int main()	// def main
{
 	for (day = MON ; day <= SUN ; day++)	// 'day' in [{MON}, {SUN}], difference = 1 . do the internal for each 'day'
	{
		printf("the enum element: %d\n",day) ;	// print"the enum element: {day}\n"{day:%d}
	}

	return 0 ;	// exit
}
```

# use with SWITCH
```c
```
