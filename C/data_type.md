# int
- char
- unsigned char
- signed char
- int
- unsigned int
> unsigned int > 0
- short
- unsigned short
- long
- unsigned long
# float
- float
	- 6位有效数字
- double
	- 15位有效数字
- long double
	- 19位有效数字
# instances
```c
int i = 10;	/*def i: 10, int*/
float f = 3.14;	/*def f: 3.14, float*/
double d = i + f; /*def d: i+f, double*/
int e = (int)d;	
```
```c
# include <stdio.h>
# include <limits.h>

int main()
{
	printf("int 存储大小 : %lu \n", sizeof(int));	/*print "int 存储大小 : {sizeof(int)} \n" [sizeof(int) = unsigned long]*/
	
	return 0;
}
```
```c
# include <stdio.h>
# include <float.h>

int main()
{
	printf("float 存储最大字节数 : %lu \n", sizeof(float));		/* print "float 存储最大字节数 : {sizeof(float)} \n" [sizeof(float) = index] */
	printf("float 最小值： %E\n", FLT_MIN);	/* print "float 最小值：{FLT_MIN}\n" [FLT_MIN = index] */
	printf("float 最大值: %E\n", FLT_MAX);	/* print "float 最大值 {FLT_MAX}\n" [FLT_MAX = index] */
	printf("print 精度值: %d\n", FLT_DIG);	/* print "精度值: {FLT_DIG}\n" [FLT_DIG = double] */

	return 0;
}
```
