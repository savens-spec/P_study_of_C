/*program 6.5 joining strings - revitalized
 * using strings library*/
#include <stdio.h>
#include <string.h>
#define STR_LENGHT 40

int main(void)
{
	char str1[STR_LENGHT] = "To be or not to be";
	char str2[STR_LENGHT] = ",that is the question";

	if(STR_LENGHT > strlen(str1) + strlen(str2)) /*enough space*/
		printf("\n%s \n", strcat(str1, str2));   /*yee, so display joined string*/

	else
		printf("\nYou can't put a quart into pint pot.");
	return 0;
}
