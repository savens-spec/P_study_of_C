/*program 4.9 sum of integers step by step*/
#include <stdio.h>

int main(void)
{
	long sum = 0L;   /*stores the sum of integers*/
	int count = 0;   /* number of sums to be calculated*/

	/*prompt for, and read the input count*/
	printf("\nEnter the number of integer you want to sum: ");
	scanf("%d", &count);

	for(int i = 1 ; i <= count ; i++)
	{
		sum = 0L;    /*initialize sum for the inner loop*/

		/*calculate sum of integer from 1 to i*/
		for(int j = 1 ; j <= i  ; j++)
			sum += j;
		printf("\n%d\t%ld\n", i, sum);   /*output sumof 1 to i*/
	}
	return 0;
}
