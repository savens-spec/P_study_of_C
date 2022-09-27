/*program 4.9 sums of integers with a whhile loop nested in a for loop*/
#include <stdio.h>

int main(void)
{
	long sum = 0l;  /*stores the sum of integers */
	int j = 1;/*inner loop control varable*/
	int count = 0; /*number of sum to be calculated*/

	/*frompt for, and read the input count*/
	printf("\nEnter the number of integers you want to sum: ");
	scanf("%d", &count);

	for(int i = 1 ; i <= count ; i++)
	{
		sum = 1L;   /*initialize sum for the inner loop*/
		j = 1;   /*initialize integer to be added*/
		printf("\n1");

		/*calculate sum of integer from 1 to i*/
		while(j < i)
		{
			sum += ++j;
			printf("+%d", j);   /* output +j -on the same line*/
		}
		printf(" =%ld\n", sum);  /*output = sum*/
	}
	return 0;
}
