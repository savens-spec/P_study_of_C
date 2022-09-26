/*program 4.8 while programing and suming integers*/
#include <stdio.h>

int main(void)
{
	long sum = 0L;   /*the sum of the integer*/
	int i = 1;
	int count = 0;  /*the count of integers to be summed*/

	/*get the count of the number of integers to sum*/
	printf("\nEnter the number of integers to sum: ");
	scanf("%d", &count);

	/*sum the integers from 1 to count*/
	while(i <= count)
		sum += i++;

	printf("Total of the first %d number is %ld\n", count, sum);
	return 0;
}
