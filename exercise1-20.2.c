#include <stdio.h>

#define MAX_BUFFER 1024 
#define TAB '\t'
#define SPACE ' '
#define TABSPACE 3

/*
Exercise 1-20.  Write a program  detab  that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every  n  columns. Should  n  be a variable or a symbolic parameter? 
*/
int main()
{
	int i = 0;
	char line[MAX_BUFFER];


	while ( fgets(line, MAX_BUFFER, stdin ))
	{
		for ( i = 0; line[i] != '\0'; i++ )
		{
			if (line[i] == TAB)
			{
				int space;
				for ( space = 0; space < TABSPACE; space++)
				{
					line[i++] = SPACE;
				}
			}
		}
		puts(line);
	}
	return 0;
}



