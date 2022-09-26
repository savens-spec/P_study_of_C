/*programe 4.7 a guessing game */
#include <stdio.h>

int main(void)
{
	int chosen = 15; /*the lucky number*/
	int guess = 0;  /*stor a guess*/
	int count = 3;  /*the maximum number of triers*/

	printf("\nThis is a guessing game.");
	printf("\nI have chosen a number between 1 and 20"" which you must guess.\n");

	for( ; count > 0 ; --count)
	{
		printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
		printf("\nEnter a guess: ");   /*prompt for a guess*/
		scanf("%d", &guess);   /*read in guess*/

		/*check for a correct*/
		if(guess == chosen)
		{
			printf("\nYou guessed it right!");
			return 0;  /*end of ptogram*/
		}

		/*checking for in valide geuss*/
		if(guess<1 || guess>20)
			printf("i said between 1 to 20.\n");
		else
			printf("Sorry. %d is wrong. \n", guess);
	}
	printf("\nyou have had three tries and failed. the number %d\n", chosen);
	return 0;
}
