
#include <stdio.h>

/*Exercise 1-8: Count blamks, tabs and newlines. */

#define ESC '\\'

int main(void)
{

	int c;

	
	while ((c = getchar()) != EOF)
	{
		if (c == '\b' || c == '\t' || c == '\\'){
			if (c == '\b') {
				putchar(ESC);
				printf("b");
			}
			if (c == '\t') {
				putchar(ESC);
				printf("t");
			}
			if (c == '\\') {
				putchar(ESC);
				putchar(ESC);
			}
		}
		if (c != '\n' || c != '\t' || c != '\\')
			putchar(c);
		
	}

}
