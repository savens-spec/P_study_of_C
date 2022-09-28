/*program 5.1 averaging ten numbers without storing the mumbers*/
#include <stdio.h>

int main(void)
{
	int number = 0; /*stores a number*/
	int count = 10L; /*number of value to be read*/
	long sum = 0L;   /*sum of the numbers*/
	float average = 0.0f;   /* average of the number*/

	/*read the ten numbers to be average*/
	for(int i = 0 ; i < count ; i++)
	{
		printf("Enter grade: ");
		scanf("%d", &number);   /*read a number*/
		sum += number;   /*add it to sum*/
	}

	average = (float)sum/count;   /*calculate the average*/

	printf("\nAverage of the ten numbers entered is: %f\n", average);
	return 0;
}
