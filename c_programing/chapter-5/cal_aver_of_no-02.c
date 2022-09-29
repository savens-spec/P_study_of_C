/* program 5.2 averaging   ten mumbers  - storing the numbers the hard way*/
#include <stdio.h>

int main(void)
{
	int number0 = 0, number1 = 0, number2 = 0, number3 = 0, number4 = 0;
	int number5 = 0, number6 = 0, number7 = 0, number8 = 0, number9 = 0;

	long sum = 0L;   /*sum of the number*/
	float average = 0.0f; /*average of the number*/

	/*read the ten numbers to be average*/
	printf("Enter the first five numbers,\n");
	printf("use a space or press Enter between each number.\n");
	scanf("%d%d%d%d%d", &number0, &number1, &number2, &number3, &number4);
	printf("Enter the five last numbers,\n");
	printf("use a space or press Enter between each number.\n");
	scanf("%d%d%d%d%d", &number5, &number6, &number7, &number8, &number9);


	/*now we have the have ten numbers, we can calculate the average*/
	sum = number0 + number1 +number3 + number4 + number5 + number6 + number7 + number8 + number9;
	average = (float)sum/10.0f;

	printf("\nAverage of the ten numbers entetered is: %f\n", average);
	return 0;
}
