/*project 3.3 using nested ifs to analyze numbers*/
#include <stdio.h>
#include <limits.h>

int main(void)
{
	long test = 0L; /*scores tge integer to be checked*/

	printf("Enter an integer less than %ld:", LONG_MAX);
	scanf("%ld", &test);

	/*test for old or even using the remender after dividing by 2*/
	if(test % 2L == 0L)
	{
		printf("The number %ld is even", test);
		/*now check wether half tye numbe is even*/
		if((test/2L) % 2L == 0L)
		{
			printf("\nHalf of %ld is also even", test);
			printf("\nThat's intresting isn't it?\n");
		}
	}
	else
		printf("The number %ld is odd\n", test);
	return 0;
}
