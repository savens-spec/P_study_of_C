/*program 3.1 a simple example of the if statment*/
#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("\nEnter an integer between 1 to 10: ");
	scanf("%d", &number);

	if(number > 5)
		printf("You enterd %d which is greater than 5\n", number);

	if(number < 6)
		printf("You entered %d less than 6\n", number);
	return 0;
}
