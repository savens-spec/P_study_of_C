/*program 3.5 testing letters the easy way*/
#include <stdio.h>

int main(void)
{
	char letter = 0;

	printf("Enter an uppercase letter:"); /*promp for input*/
	scanf("%c", &letter);  /*read the input character*/

	if((letter >= 'A') && (letter <= 'Z')) /*verify uppercase letter*/
	{
		letter += 'a' - 'A';   /*convert to lowercase*/
		printf("You entered an uppercase %c \n", letter);
	}
	else
		printf("You did not enter an uppercase letter\n");
	return 0;
}
