#include <stdio.h>	// import modules: stdio.h

// declare func to call: swap
void swap(int *x, int *y) ;

int main()	// def main
{
	int a = 100 ;	// def a = 100, int, var, autodel
	int b = 200 ;	// def b = 200, int, var, autodel

	printf("the value of a is %d before its value is swapped\n",a) ;	// print "the value of a is {a} before its value is swapped\n"{a:%d}
	printf("the value of b is %d before its value is swapped\n",b) ;	// print "the value of b is {b} before its value is swapped\n"{b:%d}

	swap(&a, &b) ;	// swap the value of 'a' and 'b': call swap(&a, &b)	// &a = the RAM address of a

	printf("the value of a is %d before its value is swapped\n",a) ;	// print "the value of a is {a} after its value is swapped"{a:%d}
	printf("the value of b is %d before its value is swapped\n",b) ;	// print "the value of a is {b} after its value is swapped"{b:%d}

	return 0 ;	// exit
}

void swap(int *x, int *y)	// def func swap: return = void, argument = [*x, *y], default_value = [null, null], type = [int,int],
{
	int temp ;	// def temp = null, int, var, autodel
	
	// exchange the value of RAM addresses of '*x' and '*y'
	temp = *x ;	// save {*x} to 'temp'
	*x = *y ;	// overwrite {*x} with {*y}
	*y = temp ;	// overwrite {*y} with {*x}
	
	return ;	// finished, no need to return a value
}

