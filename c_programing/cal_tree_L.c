/*program 2.18 calculating the height of a tree*/
#include <stdio.h>

int main(void)
{
	long shorty = 0L; /*shorty's height in inches*/
	long lofty = 0L; /*lofty's height in inchs*/
	long feet = 0L;
	long inches =0L;
	long shorty_to_lofty = 0;/*distance from shorty to lofty*/
	long lofty_to_tree = 0; /*distance from lofty to the tree*/
	long tree_height = 0;/*height of tye tree*/
	const long inches_per_foot = 12L;

	/*get lofty's height*/
	printf("Enter lofty's height to the top of his/her head, in whole feet:");
	scanf("%ld", &feet);
	printf("       ...and then inch: ");
	scanf("%ld", &inches);
	lofty=feet*inches_per_foot+inches;

	/*get shorty's height up to his eyes*/
	printf("Enter shorty's height ip to his/her eyes, in whole feet: ");
	scanf("%ld", &feet);
	printf("       ...and the inch:");
	scanf("%ld", &inches);
	shorty = feet*inches_per_foot+inches;

	/*get the distance from shorty to lofty*/
	printf("Enter tge distance of shorty and lofty, in whole feet:");
	scanf("%ld", &feet);
	printf("                  ...and the inch:");
	scanf("%ld", &inches);
	shorty_to_lofty = feet*inches_per_foot+inches;

	/*get tge distance of lofty to tge tree*/
	printf("Finally enter tge distance from lofty to the tree to the nearest foot:");
	scanf("%ld", &feet);
	lofty_to_tree = feet*inches_per_foot;
	/*tge code to calculate tge height of the tree*/
	tree_height = shorty + (shorty_to_lofty + lofty_to_tree)*(lofty-shorty)/shorty_to_lofty;

	/*the code to display tye result goes here*/
	printf("The height of tye tree is %ldfeet and %ldinches\n", tree_height/inches_per_foot, tree_height % inches_per_foot);
	return 0;
}
