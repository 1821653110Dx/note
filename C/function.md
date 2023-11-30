```c
# include <stdio.h>	// import modules: stdio,h

// declare func to call: max
int max(int, int) ;
//

int main()	// def main
{
	int a = 100 ;	// def a = 100, int, var, autodel
	int b = 200 ;	// def b = 200, int, var, autodel
	int ret ;	// def ret = null, int, var, autodel

	ret = max(a,b) ;	// {get the max between 'a' and 'b': call max(a,b)}, save the return value to ret
	
	printf("Max value is %d\n",ret) ;	// print "Max value is {ret}\n"{ret:%d}

	return 0 ;	// exit
}

int max(int num1, int num2)// def func max: return = int, argument = [num1,num2], default_value = [null, null], type = [int, int]
{
	int result ;	// def result = null, int, var, autodel

	if (num1 > num2)	// if num1 > num2
		result = num1 ;	// save {num1} to result
	else	// otherwisse
		result = num2 ;	// save {num2} to result
	
	return result ;	// return {result}	
}

```
