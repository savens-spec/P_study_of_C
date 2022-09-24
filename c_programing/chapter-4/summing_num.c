/*program 4.3 summing the integers from 1 to a users-specified number*/
#include <stdio.h>

int main(void)
{
	long sum = 0;    /*stores the sum of the intergers */
	int count = 0;   /* the number of integer to br summed */

	/*read the number of the integers to be summed*/
	printf("Enter the number of integers you want to sum: ");
	scanf("%d", &count);

	/*sum integers from 1 to count*/
	for(int i = 1 ; i <= count ; i++)
		sum += i;

	printf("\ntotal of the first %d numbers is %ld\n", count, sum);
	return 0;
}
