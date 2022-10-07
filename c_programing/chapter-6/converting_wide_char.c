/*program 6.9A finding ocurrence of one wide character string in another */
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

int main(void)
{
	wchar_t text[100];   /*input buffer for strings to be searched*/
	wchar_t substring[40]; /*input buffer for string sought*/

	printf("\nEnter the string to be searched(less than 100 characters): \n");
	fgetws(text, 100, stdin);
	printf("\nEnter string sought (less than 40 characters): \n");
	fgetws(substring, 40, stdin);

	/*overwrite the new line character in each string*/
	text[wcslen(text)-1] = L'\0';
	substring[wcslen(substring)-1] = L'\0';

	printf("\nFirst sting entered:\n%S\n", text);
	printf("\nSecound string entered:\n%S\n", substring);

	/*covert both string to uppercase.*/
	for(int i = 0 ; (text[i] = towupper(text[i])) ; i++);
	for(int i = 0 ; (substring[i] =  towupper(substring[i])) ; i++);

	printf("\nThe secound string %s found in first.\n\n", ((wcsstr(text, substring) == NULL) ? "was not" : "was"));
	return 0;
}
