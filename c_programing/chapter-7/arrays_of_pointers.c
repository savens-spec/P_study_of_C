/*program 7.12arrays of pointers to strings*/
#include <stdio.h>
const size_t BUFFER_LEN = 512;             /*size of input buffer*/

int main(void)
{
	char buffer[BUFFER_LEN];    /*stor for strings*/
	char *pS[3] = { NULL };    /*arrays of string pointers*/
	char *pbuffer = buffer;     /*pointer to buffer*/
	size_t index = 0;           /*available buffer position*/

	printf("\nEnter 3 mesahe that total less than %u characters. ", BUFFER_LEN-2);

	/*raed the stringd from the keyboard*/
	for (int i = 0 ; i < 3 ; i++)
	{
		printf("\nEnter %s message\n", i > 0 ? "another" : "a");
		pS[i] = &buffer[index];  /*save start of string*/

		/*raed up to the end of the buffer if necessary*/
		for( ; index < BUFFER_LEN ; index++)    /*if you read \n ...*/


			if((*(pbuffer + index) = getchar()) == '\n')
			{
				*(pbuffer + index++) = '\0';    /*substitute \0 */
				break;
			}

		/*check for buffer capacity exceeded*/
		if((index == BUFFER_LEN) && ((*(pbuffer + index -1 ) != '\0') || (i < 2)))
		{
			printf("\nYou ran out of space in the buffer");
			return 1;
		}
	}

	printf("\nThe string you entered are: \n\n");
	for(int i = 0 ; i < 3 ; i++)
		printf("%s\n", pS[i]);

	printf("The buffer has %d characters unused. \n", BUFFER_LEN - index);
	return 0;
}
