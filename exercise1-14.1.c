#include <stdio.h>

#define ASCI 64

int main()
{
	unsigned int i = 0;
	unsigned int c = 0;
	int blank = 0;
	int letters[ASCI];

	for ( i = ('A' - '0'); i <= ASCI; i++)
		letters[i] = 0;
		putchar(i);

	while (( c = getchar()) != EOF)
	{
		if ( c != ' ' || c != '\t' || c != '\n' )
			++letters['c'];
		else if ( c == ' ' || c == '\t' || c == '\n' )
			++blank;
		putchar(++c);
	}
	for ( i = 0; i <= ASCI; i++)
		printf("%d \n", letters[i]);
} 


		

