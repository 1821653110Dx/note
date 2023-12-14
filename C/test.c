/* import modules: stdio.h */
#include<stdio.h>

/* decalre func to call: getAverage */
double getAverage(int arryp[], int size) ;

int main()	// def main
{
	int balance[] = {1000, 2, 3, 17, 50} ;	// def balance : {1000, 2, 3, 17, 50}, int, ls[], autodel
	double avg ;	// def avg : null, double, var, autodel

	avg = getAverage( balance, 5 ) ;	// {get average value of every item in 'balance': call getAverage( balance, 5 )}, save it to 'avg'
	
	printf("average value : %f", avg) ;	// print"average value : {avg}"{avg:%f}

	return 0 ;	// exit
}

double getAverage(int arry[], int size)	// def func getAverage : return = double, argument = [arry[], size], default_value = [null, null], type = [int, int]
{
	int i ;		// def i : null, int, var, autodel	// autodel : current quantity's scope is within the current func and will be autodel
	double average ;	// def average : null, double, var, autodel
	double sum = 0 ;	// def sum : 0, double, var, autodel

	for ( i = 0 ; i < size ; i++)	// set {col : i} scope of 'arry' : [0, size)
	{
		sum += arry[i] ;	// save SUM(all items in [1, col]) to 'sum'
	}

	average = sum/size ;	// save {sum / size} to 'average'

	return average ;	// return {average}
}
