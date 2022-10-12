/*program 7.2 what's the pointer*/
#include <stdio.h>

int main(void)
{
	long num1 = 0L;
	long num2 = 0L;
	long *pnum = NULL;

	pnum = &num1;     /*get address of num1*/
	*pnum = 2;         /*set num1 to 2*/
	++num2;
	num2 + *pnum;       /*add num1 to num2*/

	pnum = &num2;      /*get address of num2*/
	++*pnum;           /*increment num2 indirectly*/

	printf("\nnum1 = %ld num2 = %ld *pnum = %ld *pnum + num2 - %ld\n", num1, num2, *pnum, *pnum + num2);
	return 0;
}
