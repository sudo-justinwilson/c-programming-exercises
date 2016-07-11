#include <stdio.h>

#define MAX 1000

/* a program to print out a vertical histogram from input
*/
int main()
{


	int i, c, length, index, iw,  longest_word;
	int h = 0;
	length = 0;
	index = 0;
	iw = 0;
 	longest_word = 0; 
	int wordlengths[MAX];
	
	for ( i = 0; i <= MAX; i++)
		wordlengths[i] = 0;

// get input
	for (  c = 0; ((c = getchar()) != EOF); c++) 
	{
		// if input character is a letter...
		if ( c != ' ' && c != '\t' && c != '\n')
		{
			// test if we are currently inside a word
			if ( iw == 0 )
			// if not, turn on the in word ('iw') flag
				iw = 1;
			// increment word length
			length += 1;
			// for debugging...
			printf("length: %d \n", length);
		}
		else  	
		{
			// for debugging...
			printf("length equals: \t %d \n ", length);
			// if there was a word..
			if ( length > 0 )
			{
				if ( length > longest_word )
					longest_word = length;
				wordlengths[index] = length;
				++index;
				length = 0;
				iw = 0;
			}
		}
	}
	
	printf( "longest_word equals: \t %d \n", longest_word );
	printf( "index = %d \n", index);
	
	for ( h = longest_word; h > 0; h-- )
	{
		for ( i = 0; i <= index; i++)
		{
			if ( wordlengths[i] >= h )
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}

}
