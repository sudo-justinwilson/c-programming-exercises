#include <stdio.h>

#define MAX 999

#define EOL '\0'

int main()
{
	int i = 0;
	int j = 0;
	int row = 0;
	int column = 0;
	char line[MAX][MAX];

	for ( row = 0; row <= MAX; row++ )
	{
		for ( column = 0; column <= MAX; column++ )
			line[row][column] = 0;
	}



	for ( row = 0; row  

	for ( i = 0; ( ( c = getchar()) != EOF);  i++ )
	{
		line[row][column][row++] = c;
		if ( c == '\n' )
			++column; 


		while ( ( c = getchar()) != EOF)
		{
			line[row][column] = c;
		}
		++column

	}
	while ( (j =  
