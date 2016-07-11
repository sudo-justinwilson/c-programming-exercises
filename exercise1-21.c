#include <stdio.h>

#define TAB '\t'
#define TABSPACE 4
#define SPACE ' '

/*
exercise 1-21: write a program 'entab' that replaces strings of spaces with the minimum number of tabs and blanks to achieve the same spacing. use the same number of tabs as 'detab'. When either a tab or blank would suffice to reach a tab stop, which should be given preference?
*/
int main()
{
	while (fgets(line, MAX, stdin))
	{
		for ( old = 0, new = 0; line[old] != '\0'; old++)
		{
			while (line[old] == SPACE)
			{
				if ( inspace == 0)
				{
					inspace = 1;
				}
				++countspaces;
				
				if (countspaces == TABSPACE)
				{
					while (i < TABSPACE)
					{
						putchar(SPACE);
					}
				

				



	for ( i = 0; ( c = (getchar()) != EOF ); i++ );
	{
		if ( c == ' ' )
		{
			if (is == 0)

