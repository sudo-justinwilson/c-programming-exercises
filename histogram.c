#include <stdio.h>

#define MAX_RANGE 4096

int main()
{
	int wordlengths[MAX_RANGE];
	int I, c, longestword;
	int letters = 0;
	I = c = longestword = 0;
	for (I = 0; I <= MAX_RANGE; I++)
	{
		wordlengths[I] = 0;
	}
	while ((c = getchar()) != EOF)
	{
		if ( c !=" "|| c != '\t' || c != '\n' )
			letters += 1;
		else 
		{
			if ( letters > 0)
				++(wordlengths[letters]);
			if ( letters > longestword)
				longestword = letters;
			letters = 0;
		}	
	}
	int frequency = 0;
	int M = 0;

	for ( M = 0; M <= MAX_RANGE; M++ );
	{
		if ( (wordlengths[M]) >= frequency )
			frequency = wordlengths[M];
	}
	printf("frequency: %d\n", frequency);
	printf("longestword: %d\n", longestword);

	int v, h;
	v = h = 0;
	for ( v = frequency; v >= 0; v--)
	{
			for ( h = 0; h <= MAX_RANGE; h++)
			{ if ( wordlengths[h] >= v )
					{
						printf("#");
					}
					else printf(" ");
			}
					printf("\n");
	}
}
