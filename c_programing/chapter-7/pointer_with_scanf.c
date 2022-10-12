/*program 7.3 pointer argument to scanf*/
#include <stdio.h>

int main(void)
{
	int value = 0;
	int *pvalue = NULL;

	pvalue = &value;          /*set pointer to refer to value*/

	printf("Input an integer: ");
	scanf("%d", pvalue);    /*read into value via the pointer*/

	printf("\nYou entered %d\n", value);    /*output the value entered*/
	return 0;
}
