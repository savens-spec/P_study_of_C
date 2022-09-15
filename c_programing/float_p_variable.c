/*program 2.7 Division with float value*/
#include <stdio.h>

int main(void)
{
	float plank_lenght = 10.0f; /* in feet*/
	float piece_count = 4.0f; /*number of equal piece*/
	float piece_lenght = 0.0f; /*lenght of a piece in feet*/

	piece_lenght = plank_lenght/piece_count;
	printf("A plank %f feet long can be cut into %f pieces %f feet long.", plank_lenght, piece_count, piece_lenght);
	return 0;
}
