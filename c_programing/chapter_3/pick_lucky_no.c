/*program 3.8 lucky lotteries usng the switch statement */
#include <stdio.h>

int main(void)
{
	int choice = 0;  /*The number chosen*/


	/* get the choice input*/
	printf("Pick a number between 1 to 10 and you may win a price!1 ");
	scanf("%d", &choice);

	/*check for the invalide selection*/
	if((choice>10) || (choice<1))
		choice = 11; /*select invalide choice message*/
	
	switch(choice)
	{
		case 7:
			printf("\nCongratulations!");
			printf("\nYou win the collected works of Amos Gruntfuttock.");
			break;  /*jump to the end of the block*/

		case 2:
			printf("\nYou win the folding thermometer-pen-watch-umbrella.");
		        break;

		case 8:
	                printf("\nYou win the lifetime supply of aspirin tables.");
	                break;
	        
	        case 11:
			printf("\n try between 1 to 10. You wasted your guess.");
			/* no breaks - so continue with the next statement*/

		default:
			printf("\nSorry, you lose.\n");
			break;  /*defensive break - in the case of new cases*/
	}
	return 0;
}
					
