/*program 6.8 testing character in a string*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char buffer[80];       /*input buffer*/
	int i = 0;          /*buffer index*/
	int num_letters = 0; /*number of letter in input*/
	int num_digits = 0; /*number of digits in input*/

	printf("\nEnter an intresting string of less than 80 charaters: \n");
	gets(buffer);               /*read a string into buffer*/

	while(buffer[i] != '\0')
	{
		if(isalpha(buffer[i]))
			num_letters++;        /*increment letter count*/

		if(isdigit(buffer[i++]))
			num_digits++;         /*increment digit count*/
	}
	printf("\nYour string contained %d letters and %d digit.\n", num_letters, num_digits);
	return 0;
}
