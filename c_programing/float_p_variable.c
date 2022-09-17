/*program 2.7 Division with float value*/
#include <stdio.h>

int main(void)
{
	float plank_lenght = 10.0f; /* in feet*/
	float piece_count = 4.0f; /*number of equal piece*/
	float piece_lenght = 0.0f; /*lenght of a piece in feet*/

	piece_lenght = plank_lenght/piece_count;
	printf("A plank %8.2f feet long can be cut into %5.0f pieces %6.2f feet long.", plank_lenght, piece_count, piece_lenght);
	/*yo align tge value of the out put to the left a minus sign will be added imediately after % for example %-8.2f*/
	/*the 8.2 values stands this: 8 stands for field wight and 2 stands for tge number of decimals tgat will be primted out*/
	return 0;
}
