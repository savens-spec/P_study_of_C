/*program 5.7 tic-tac-toe*/
#include <stdio.h>

int main(void)
{
	int player = 0;    /*player number - 1 or 2*/
	int winner = 0;    /*the winning playe*/
	int choice = 0;    /*square selection number for turn*/
	int row = 0;       /*row index for a square*/
	int column = 0;    /*colum index for a square*/
	int line = 0;      /*row or column index in checking loop*/

	char board[3][3] = {           /*the board*/
		{'1', '2', '3'},       /*intial value are refrence number*/
		{'4', '5', '6'},       /*used to select a vacant square for*/
		{'7', '8', '9'}        /*used to select a vacant square for*/
	};                             /*a turn.  */

	/*the main game loop. the game continues for up to 9 turns*/
	/*as long as threre is no winner*/
	for(int i = 0 ; i < 9 && winner == 0 ; i++)
	{
		/*display the board*/
		printf("\n\n");
		printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

		player = i%2 + 1;  /*select players*/

		/*get valid player sqaure selection*/
		do
		{
			printf("\nPlayer %d, please enter the number of square "
					"where you want to place your %c: ", 
					player,(player == 1) ? 'X' : 'O');
			scanf("%d", &choice);

			row = --choice/3;    /*get row index of square*/
			column = choice%3;   /*get column index of square*/
		}while(choice < 0 || choice > 9 || board[row][column] > '9');

		/*insert player symbol*/
		board[row][column] = (player == 1) ? 'X' : 'O';

		/*code to check for a winning line - diagonals first*/
		if((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
			(board[0][2] == board[1][1] && board[0][2] == board[2][0]))
			winner = player;

		else
			/*check row and columns for a winning line*/
			for(line = 0 ; line <= 2 ; line ++)
				if((board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
					(board[0][2] == board[1][line] && board[0][line] == board[2][line]))
					winner = player;
	}
	/*game is over so display the final board*/
	printf("\n\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

	/*display result message*/
	if(winner == 0)
		printf("\nHow boring, it is a draw\n");
	else
		printf("\nCongratulation, player %d, YOU ARE THE WINNER!\n", winner);

	return 0;
}
