#include <stdio.h>

#define MAX_BUFFER 1024 
#define TAB '\t'
#define SPACE ' '
#define TABSPACE 4

/*
Exercise 1-20.  Write a program  detab  that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every  n  columns. Should  n  be a variable or a symbolic parameter? 
*/
int main()
{
	int old,new;
	char line[MAX_BUFFER];
	char line_buffer[MAX_BUFFER];


	while ( fgets(line, MAX_BUFFER, stdin ))
	{
		for ( old = 0, new = 0; line[old] != '\0'; old++ )
		{
			if (line[old] == TAB)
			{
				int space;
				for ( space = 0; space < TABSPACE; space++)
				{
					line_buffer[new++] = SPACE;
				}
			}
			else
			{
				line_buffer[new++] = line[old];
			}
		}
		printf("old: %d \n new: %d \n", old, new);
		line_buffer[new] = '\0';
		puts(line_buffer);
	}
	return 0;
}



