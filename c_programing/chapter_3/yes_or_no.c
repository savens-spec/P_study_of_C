/* program 3.9 testing case*/
#include <stdio.h>

int main(void)
{
	char answer = 0;   /*stores an input character*/

	printf("Enter Y or N: ");
	scanf("%c", &answer);

	switch(answer)
	{
		case 'y': case 'Y':
			printf("\nYou responded in the affirmative.");
			break;

		case 'n': case 'N':
			printf("\nYou responded in the negetive.");
			break;

		default:
			printf("You did not respond correctly...");
			break;
	}
	return 0;
}
