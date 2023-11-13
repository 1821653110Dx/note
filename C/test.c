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
