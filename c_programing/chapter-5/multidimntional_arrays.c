/*program 5.6 know your hat size - if you dare....*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	/*the size array stores hat sizes from 6 1/2 to 7 8/8*/
	/*each row defines one character of a size value so*/
	/*a size is seleted by by using the same index for eah*/
	/*the three row. example. index 2 selects 6 3/4.*/
	char size[3][12] = {                 /*Hat sixes as characters */
		{'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'},
		{'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'},
		{'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}
	};

	int headsize[12] =                 /*value in 1/8 inches*/
	{164,166,169,172,175,178,181,184,188,191,194,197};

	float cranium = 0.0;    /*head cirumfrencr in decimal inhes*/
	int your_head = 0;  /*Headsize in whole eighths*/
	int i = 0;   /*loop counter     */
	bool hat_found = false;   /*indicate when a hat is found to fit*/

	/*get the cirumfrence of the road*/
	printf("\nEnter the circumfrence o your head above your eyebrows "
			"in inches as a decimal value: ");
       scanf("%f", &cranium);

       /*convert to whole eighths of an inch*/
       your_head = (int)(8.0*cranium);

       /*
	* search for a hat size
	* a fit is when your head is greater that one headsize element
	* and less than or equal to the next. the size the second
	* headsize value
	*/
       for(i = 1 ; i < 12 ; i++)
	       /*find head size in the headsize array */
	       if(your_head > headsize[i-1] && your_head <= headsize[i])
	       {
		       hat_found = true;
		       break;
	       }

       if(your_head == headsize[0]) /*chek for main fit*/
       {
	       i = 0;
	       hat_found = true;
       }
       
       if(hat_found)
	       printf("\nYour hat size is %c %c%c%c\n",
			       size[0][i], (size[1][i] ==' ') ? ' ' : '/', size[2][i]);
       /*if no hat was found, the haed is too small, or too large */

       else
       {
	       if(your_head < headsize[0])    /*check for small*/
		       printf("\nYour are the proverbial pinhead. No hat for"
				       " you i'm afraid.\n");
	       else
		       printf("\nYou, in tchnical parlence, are a fathead."
				       " No hat for you, i'm afraid.\n");
       }
       return 0;
}
