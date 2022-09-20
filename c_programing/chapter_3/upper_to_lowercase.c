/*program 3.4 converting uppercase to lower case*/
#include <stdio.h>

int main(void)
{
	char letter = 0;/*stores a character*/
	printf("Enter an uppercase letter:");/*prompt for input*/
	scanf("%c", &letter);/*read a character*/
	/*check wether the input is an uppercase*/
	if(letter >= 'A')/*is it A or greater than*/
		if(letter <= 'Z')/*is it Zor less than*/
		{
			letter = letter - 'A' + 'a';/*convert from upper to lowercase*/
			printf("You entere d an uppercase %c\n", letter);
		}
	else
			printf("try using the shift key, bid! i wany a capital letter.\n");
	return 0;
}
