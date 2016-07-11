#include <stdio.h>

#define MAX 1000

/* this program reads input, then for each word prints out horizontal hashes, one hash for each letter, one line per word,  representing a histogram of the lengths for each word entered */ 
int main()
{


	int i, c, length, index, iw,  longest_word;
	int h = 0;
	length = 0;			// temporarily stores the word length
	index = 0;
	iw = 0;				// a flag that indicates if we are inside a word
 	longest_word = 0; 		// stores the longest word
	int wordlengths[MAX];		// an array for storing wordlengths
	
	for ( i = 0; i <= MAX; i++)	// initialise each element to zero
		wordlengths[i] = 0;

	for (  c = 0; ((c = getchar()) != EOF); c++) 		// get input
	{
		if ( c != ' ' && c != '\t' && c != '\n')	// if character is not a space (== letter)
		{
			if ( iw == 0 )				// if we are not in a word
				iw = 1;				// set flag so we are in a word
			length += 1;				// increment letter count
			printf("length: %d \n", length);		//debug
		}
		else  						// if character is a space
		{
			printf("length equals: \t %d \n ", length);	//debug
			if ( length > 0 )				// if there was a word
			{
				if ( length > longest_word )			// if last word is the longest word thus far
					longest_word = length;			// assign new longest word
				wordlengths[index] = length;		// assign current element to length
				++index;				// move onto next word
				length = 0;				// reset temp variable
				iw = 0;					// turn off flag
			}
		}
	}
	
	printf( "longest_word equals: \t %d \n", longest_word );		//debug 
	printf( "index = %d \n", index);					//debug
	
	for ( i = 0; i < index; i++ )					// walk from wordlengths[0] ...
	{
		for  ( h = 0; h < (wordlengths[i]); h++)		// for each letter, 
			printf("#");					// print '#'
		printf("\n");						// at the end of each loop, print a new line
	}
}
