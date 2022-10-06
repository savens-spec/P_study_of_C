/*program 6.9 finding occurrences of one string in another*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char text[100];     /*input buffer for string to be searched*/
	char substring[40];  /*input buffer for string sought*/

	printf("\nEnter the string to be searched (less than 40 character):\n");
	fgets(text, sizeof(substring), stdin);

	printf("\nEnter the strings sought (less than 40 character):\n");
	fgets(substring, sizeof(substring), stdin);

	/*overwrite the newline character in each string*/
	text[strlen(text)-1] = '\0';
	substring[strlen(substring)-1] = '\0';

	printf("\nFirst string entered:\n%s\n", text);
	printf("\nSecound string entered:\n%s\n", substring);


	/*cover both string to uppercase*/
	for(int i = 0 ; (text[i] = toupper(text[i])) ; i++);
	for(int i = 0 ; (substring[i] = toupper(substring[i])) ; i++);

	printf("\nThe second string %s found in the the first.", ((strstr(text, substring) == NULL) ? "was not" : "was"));
	return 0;
}
