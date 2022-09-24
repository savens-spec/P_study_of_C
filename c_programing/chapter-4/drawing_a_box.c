/*program 4.2 drawing a box*/
#include <stdio.h>

int main(void)
{
	printf("\n********************");  /*draw the top of the box*/

	for(int count = 1 ; count <= 8 ; ++count)
		printf("\n*                  *");   /*draw the sides of the box*/

	printf("\n********************\n");  /*draw the bottom of the box*/
	return 0;
}
