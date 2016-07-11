#include <stdio.h>

/*Exercise 1.9: Copy input to output, and replace each string of one or more blanks by a single blank*/

main() {
	
	int c, is;
	c = is = 0;

	while ((c = getchar()) != EOF) 
	{
		if (c == ' ')
		{
			if (is == 0)
			{
				is = 1;
				putchar(c);
			
			}
		}
		if (c != ' ')
		{
			putchar(c);
			is = 0;
		}

	}
}
