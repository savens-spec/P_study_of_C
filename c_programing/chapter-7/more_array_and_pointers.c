/*program 7.5 arrays and pointers taken further*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char multiple[] = "a string";
	char *p = multiple;

	for(int i = 0; i < strlen(multiple) ; i++)
		printf("\nmuliple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p",
				i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);
	return 0;
}
