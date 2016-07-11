#include <stdio.h>

#define TAB '\t'
#define TABSPACE 4
#define SPACE ' '
#define MAX 1024

/*
exercise 1-21: write a program 'entab' that replaces strings of spaces with the minimum number of tabs and blanks to achieve the same spacing. use the same number of tabs as 'detab'. When either a tab or blank would suffice to reach a tab stop, which should be given preference?
*/
int main()
{
	char oldline[MAX];
	char newline[MAX];
	int old = 0;
	int new = 0;
	int countspaces = 0;
	int tabs = 0;
	int spaces = 0;

	while (fgets(oldline, MAX, stdin))
	{
		for ( old = 0, new = 0; oldline[old] != '\0'; old++)
		{
			if (oldline[old] == ' ')
			{
				if (is == 0)
				{
					is = 1;
					++countspaces;
				}
				else if (is == 1)
				{
					++countspaces;
				}
			}
			else if ( oldline[old] != ' ' )
			{
				if ( countspaces > 0 && is = 1)
				{
					tabs = (countspaces / TABSPACE);
					printf("tabs: %d", tabs);
					spaces = (countspaces % TABSPACE);
					printf("spaces: %d", spaces);
					while ( tabs > 0 )
					{
						newline[new++] = TAB;
						--tabs;
					}
					while ( spaces > 0 )
					{
						newline[new++] = SPACE;
						--spaces;
					}
					is = 0;



			while (oldline[old] == SPACE)
			{
//				if ( inspace == 0)
//				{
//					inspace = 1;
//				}
				++countspaces;
				++old;
			}
			printf("old:%d new:%d---\n", old, new);
			if (countspaces > 0 )
			{
				tabs = (countspaces / TABSPACE);
				spaces = (countspaces % TABSPACE);
				while ( tabs > 0 )
				{
					newline[new++] = TAB;
					--tabs;
				}
				while ( spaces > 0 )
				{
					newline[new++] = SPACE;
					--spaces;
				}
			}
//			else
//			{
				newline[new++] = oldline[old];
//			}
		}
		newline[new] = '\0';
		printf("oldline (%d characters): \t %s \n", old, oldline);
		printf("newline (%d characters): \t %s \n", new, newline);
	}
	return 0;
}
