#include <stdio.h>

#define ESC '\\'

int main (void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if ( c == '\t')
		{
			putchar(ESC);
			putchar('t');
		}
		else if ( c == '\b')
		{
			putchar(ESC);
			putchar('b');
		}
		else if ( c == '\\')
		{
			putchar(ESC);
			putchar(ESC);
		}
		else putchar(c);
	}
} 
