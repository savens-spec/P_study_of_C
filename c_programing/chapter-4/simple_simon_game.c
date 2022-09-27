/*program 4.12 simple simon*/
#include <stdio.h>      /*for input and output*/
#include <ctype.h>      /*for toupper() function*/
#include <stdbool.h>    /*for bool, true or false*/
#include <stdlib.h>     /*for rand() and srand()*/
#include <time.h>       /*for time() function*/

int main(void)
{
	/*record if another game is being played*/
	char another_game = 'Y';

	/* rest of the declearation for the program*/

	/*true if correct sequence entered, false otherwise*/
	bool correct = true;
	
	/*number of sequences entered  successfully*/
	int counter = 0;
	
	int sequence_length = 0;    /*number of digits in a sequence*/
	time_t seed = 0;           /*seed value for random number sequence*/
	int number = 0;            /*stores an input digit*/

	time_t now = 0;  /*stores current time - seed for random value*/
	int time_taken = 0; /*time taken for game in sconds*/

	/*describe how the game is played*/
	printf("To pal simon, ");
	printf("watch the screen for a sequence of digits. ");
	printf("\nWatch carefully, as the digit are displayed"" for a seconf! ");
	printf("\nThe computer will remove them, and then prompt you  ");
	printf("to enter the same sequence. ");
	printf("\nWhen you do, you must put space between the digits. \n");
	printf("\n Good luck!\nPress Enter to play\n");
	scanf("%c", &another_game);

	/*one outer loop interation is one game*/
	do
	{
		correct = true;   /*by default indicate correct sequence entered*/
		counter = 0;      /*initialize count of numbers of successful tries*/
		sequence_length = 2; /*initial lenght of a digit sequence*/
		time_taken = clock();  /*record curend time at start game*/
		
		/*other code to initialize the game*/

		/*inner loop contnues as long as sequence are entered correctly*/
		while(correct)
		{
			/*on every third successful try, increase the sequence lenght*/
			sequence_length += counter++%3 == 0;

			/*set seed to be the number of seconds since jan 1,1970*/
			seed = time(NULL);

			now = clock();  /*record start time for sequence*/

			/*generation a sequence of numbers and display the number*/
			srand((unsigned int)seed);   /*intitialze the random sequence*/
			for(int i = 1 ; i <= sequence_length ; i++)
				printf("%d", rand() % 10); /*output a random digit*/

			/*wait one second*/
			for ( ;clock() - now < CLOCKS_PER_SEC; );

			/*now overwrite the digit sequence*/
			printf("\r");    /*go to beginning of the line */
			for(int i = 1 ; i <= sequence_length ; i++)
				printf("  ");    /*output two space*/

			if(counter == 1)   /*only output messages for the first try*/
				printf("\nNow you enter te sequence - don't forget"" the space\n");
			else
				printf("\r");  /*back to the beginning of the line*/

			/*prompt for the input sequence*/

			/*check the input sequence of digit against the original*/
			srand((unsigned int)seed); /*restart the random sequence*/
			for(int i = 1 ; i<= sequence_length ; i++)
			{
				scanf("%d", &number);  /*read an input number*/
				if(number != rand() % 10 )  /*compare against raandom digits*/
				{
					correct = false; /*incorrect entry*/
					break;   /* no need to check further.....*/
				}
			}
			printf("%s\n", correct ? "Correct!" : "Wrong!");

		}
		/*calculate total time to play the game in seconds*/
		time_taken = (clock() - time_taken) / CLOCKS_PER_SEC;

		/*output the score when the game is finished*/
		printf("\n\nYour score is %d", --counter * 100 / time_taken);

		fflush(stdin);

		/*checkif a new game is reqired*/
		printf("\nDo you want to play again (y/n)? ");
		scanf("%c", &another_game);
	}while(toupper(another_game) == 'Y');
	return 0;
}
