/*program 6.2 finding out the lenght of a string*/
#include <stdio.h>

int main(void)
{
	char str1[ ] = "To be or not to be";
	char str2[ ] = ",that is the question";
	int count = 0;    /*stores the string lenght*/
	while (str1[count] != '\0') /*increment count till we reach the string*/
		count++;          /*terminating character*/
	printf("\nThe legnht of the string \"%s\" is %d characters.", str1, count);
	count = 0;   /*reset to zero for next string*/
	while (str2[count] != '\0')     /*count characters in secound string*/
		count++;
	printf("\nThe lenght of the string \"%s\" is %d characters. \n", str2, count);
	return 0;
}
