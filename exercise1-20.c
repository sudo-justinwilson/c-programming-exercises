#include <stdio.h>

#define TABSPACE 4

/*
Exercise 1-20.  Write a program  detab  that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every  n  columns. Should  n  be a variable or a symbolic parameter? 
*/
int main()
{

	for ( i = 0; (c = (getchar()) != EOF); i++)
	{
		if ( c == '\t')
		{
			printf("    ");
		}
		else
			putchar(c);
	}
