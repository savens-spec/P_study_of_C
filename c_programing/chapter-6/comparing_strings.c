/*program 6.6 comparing strings*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word1[20];      /*stores the first word*/
	char word2[20];      /*stores the second word*/

	printf("\nType in the first word (less than 20 characters):\n1: ");
	scanf("%19s", word1);  /*read the first word*/
	printf("\nType in the second word (less 20 characters):\n2: ");
	scanf("%19s", word2);  /*read the second word*/

	/*compare the two words*/
	if(strcmp(word1, word2) == 0)
		printf("You have entered identical words");

	else
		printf("%s precedes %s", (strcmp(word1, word2) < 0) ? word1 : word2, 
				(strcmp(word1, word2) < 0) ? word2 : word1);
	return 0;
}
