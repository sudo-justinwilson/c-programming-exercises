#include <stdio.h>

#define TAB '\t'
#define TABSPACE 4
#define SPACE ' '
#define MAX 1024

/*
exercise 1-21: write a program 'entab' that replaces strings of spaces with the minimum number of tabs and blanks to achieve the same spacing. use the same number of tabs as 'detab'. When either a tab or blank would suffice to reach a tab stop, which should be given preference?
*/
// START K&R CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER   1024
#define SPACE        (char)' '
#define TAB          (char)'\t'

/*
CalculateNumberOfSpacesAndTabs: Calulate the minimum number of tabs and spaces required to achieve the same space from a string of 0's (the opposite of 'detab').
*/
int CalculateTabsAndSpaces(int Offset, int TabSize, int Tabs, int Spaces)
{
	   return TabSize - (Offset % TabSize);
}

int CalculateNumberOfSpaces(int Offset, int TabSize)
{
	   return TabSize - (Offset % TabSize);
}

int main(void)
{
  char  Buffer[MAX_BUFFER];
  int TabSize    = 5; /* A good test value */

  int i, j, k;

  while(fgets(Buffer, sizeof(Buffer), stdin))
  {
     for(i = 0; Buffer[i] != '\0'; i++)
     {
      if(Buffer[i] == TAB)
      {
       j = CalculateNumberOfSpaces(i, TabSize);
       for(k = 0; k < j; k++)
       {
	putchar(SPACE);
	}
}
	else
	{
		putchar(Buffer[i]);
	}
	}
	}
	return 0;
}
// FINISH K&R CODE





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
			while (oldline[old] == SPACE)
			{
//				if ( inspace == 0)
//				{
//					inspace = 1;
//				}
				++countspaces;
				++old;
			}
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
			else
			{
				newline[new++] = oldline[old];
			}
			newline[new] = '\0';
			printf("oldline (%d characters): \t %s \n", old, oldline);
			printf("newline (%d characters): \t %s \n", new, newline);
		}
	}
	return 0;
}
