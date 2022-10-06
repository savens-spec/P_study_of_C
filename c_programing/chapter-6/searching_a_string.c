/*program 6.7 a demonstration of seeking and finding*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "This string contains the holy grail.";
	char str2[] = "the holy grail";
	char str3[] = "the holy grill";

	/*search str1 for the occurrence of str2*/
	if(strstr(str1, str2) == NULL)
		printf("\n\"%s\" was not found.", str2);
	else
		printf("\n\"%s\" was not found in \"%s\"", str2, str1);

	/*search str1 for the occurrence of str3*/
	if(strstr(str1, str3) == NULL)
		printf("\n\"%s\"was not found.", str3);
	else
		printf("\nWe shouldn't get to here!");
	return 0;
}
