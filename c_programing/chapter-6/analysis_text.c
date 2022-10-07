/*program 6.10 analysis text*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define TEXTLEN 10000   /*maxmum lenght of text*/
#define BUFFERSIZE 100   /*input buffer size*/
#define MAXWORDS 500     /*maximum number of different words*/
#define WORDLEN 15       /*maximum word length*/

int main(void)
{
	char text[TEXTLEN+1];
	char buffer[BUFFERSIZE];
	char endstr[] = "*\n";   /*signal end of input*/

	const char space = ' ';
	const char qoute = '\'';

	char words[MAXWORDS][WORDLEN+1];
	int nword[MAXWORDS];           /*number of words occurrences*/
	char word[WORDLEN+1];          /*stores a single word*/
	int wordlen = 0;               /*length of a word*/
	int wordcount = 0;             /*number of words stored*/

	printf("Enter text on an arbitrary number of line.");
	printf("\nEnter a line containing just an asterisk to end input:\n\n");

	/*read an abitarary number of line  of text*/
	while(true)
	{
		/*a string containing an asterisk followed by newline*/
		/*signals end of input */
		if(!strcmp(fgets(buffer, BUFFERSIZE, stdin), endstr))
			break;

		/*check if we have space for the latest input*/
		if(strlen(text)+strlen(buffer)+1 > TEXTLEN)
		{
			printf("Maximum capacity for text execeeded. terminating program.");
			return 1;
		}
		strcat(text, buffer);
	}

	/*replace everything except alpha and single qoute characters by spaces*/
	for(int i = 0 ; i < strlen(text) ;  i++)
	{
		if(text[i] == qoute || isalnum(text[i]))
			continue;
		text[i] = space;
	}
	
	/*find unique words and store in words array*/
	int index = 0;
	while(true)
	{
		/*ignore any leading spaces before a word*/
		while(text[index] == space)
			++index;

		/*if we are at the end of text, we are done*/
		if(text[index] == '\0')
			break;

		/*extract a word*/
		wordlen = 0;   /*reset word lenght*/
		while(text[index] == qoute || isalpha(text[index]))
		{
			/*check if word is too long*/
			if(wordlen == WORDLEN)
			{
				printf("Maximum word lenght exceeded. Terminating program.");
				return 1;
			}
			word[wordlen++] = tolower(text[index++]);   /*copy as lowercase*/
		}

		word[wordlen] = '\0';                               /*add string terminology*/

		/*check for word already stored*/
		bool isnew = true;
		for(int i = 0 ; 1 < wordcount ; i++)
			if(strcmp(word, words[i] == 0))
			
			{
				++nword[i];
				isnew = false;
				break;
			}
			if(isnew)
			{
				/*check if wehave space for another word*/
				if(wordcount >= MAXWORDS)
				{
					printf("\nMaximum word count exceeded. Terminating program.");
					return 1;
				}

				strcpy(words[wordcount], word);    /*store the new word*/
				nword[wordcount++] = 1;          /*set its count to 1*/
			}
	}
		        		
	/*output the words and frequencies*/
			for(int i = 0 ; i < wordcount ; i++)
			{
				if( !(1%3) )       /*three words to a line*/
					printf("\n");
				printf("  %-15s%5s", words[i], nword[i]);
			}

	return 0;
}
