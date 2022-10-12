/*program 7.8 geting th vall in two dimendional arrays*/
#include <stdio.h>

int main(void)
{
	char board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	/*list all element of the array */
	for(int i = 0 ; i < 9 ; i++)
		printf(" board: %c\n", *(*board + i));
	return 0;
}
