/*program 6.3 joining strings*/
#include <stdio.h>

int main(void)
{
	char str1[40] ="To be or not to be";
	char str2[] = ",that is the question";
	int count1 = 0;               /*lenght of str1*/
	int count2 = 0;               /*lenght of str2*/

	/*find the lenghtof the first string*/
	while (str1[count2]   )    /*increment count till we reach the string*/
		count1++;             /*terminating character*/

	/*find the length of the secound string*/
	while (str2[count2])   /*count characters in secound string*/
		count2++;      /*terminating chaacter*/

	/*check that we have enough space for both string*/
	if(sizeof str1 < count1 + count2 + 1)
		printf("\nYou can't put a quart into a pint pot.");
	else
	{   /*copy 2nd string to end of the first */
		count2 = 0;         /*reset index for str2 to 0*/
		while(str2[count2]) /*copy up to null from str2*/
			str1[count1++] = str2[count2++];
		str1[count1] = '\0';  /*make sure we add terminator*/
		printf("\n%s\n", str1 );   /*output combined string*/
	}
	return 0;
}
