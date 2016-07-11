#include <stdio.h>

#define MAX 1000

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

	for (  c = 0; ((c = getchar()) != EOF); c++) 
	{
		if ( c != ' ' && c != '\t' && c != '\n')
		{
			if ( iw == 0 )
				iw = 1;
			length += 1;
			printf("length: %d \n", length);
		}
		else  	
		{
			printf("length equals: \t %d \n ", length);
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
	
	for ( i = 0; i < index; i++ )
	{
		for  ( h = 0; h < (wordlengths[i]); h++)
			printf("#");
		printf("\n");
	}
}
