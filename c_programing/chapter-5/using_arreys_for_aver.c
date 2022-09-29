/*program 5.3 Average ten numbers - storing the number the easy way*/
#include <stdio.h>

int main(void)
{
	int number [10];    /*arrey storing 10 values*/
	int count = 10;     /*number of value to be read*/
	long sum = 0L;      /*sum of the numbers*/
	float average = 0.0f; /*average of the numbers*/

	printf("\nEnter the ten numbers: \n");    /*prompt for input*/

	/*read the ten numbersto be average*/
	for(int i = 0 ; i < count ; i++)
	{
		printf("%2d> ", i+1);
		scanf("%d", &number[i]);   /*read a number*/
		sum += number[i];   /*add to sum*/
	}

	average = (float)sum/count;  /*calculate the average*/

	printf("\nAverage of the ten numbers entered is : %f\n", average);
	return 0;
}
