#include <stdio.h>

#define CYCLE 32

#define RANGE 256

int main()
{
	int letters[RANGE];
	int i= 0;
	int blank = 0;
	int other = 0;
	int c = 0;

	for ( i = 0; i <= RANGE; i++)
		letters[i] = 0;

	while (( c = getchar()) != EOF) 
	{
		if (( c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z' ))
			++letters[c - 0];

		else if ( c == ' ' || c == '\t' || c == '\n' )
			++blank;

		else 
			++other;

	}

	for ( i = 'A'; i <= 'Z'; ++i )
		printf(" %c = %d,\t", i, letters[i - 0]);
	putchar('\n');

	for ( i = 'a'; i <= 'z'; ++i )
		printf(" %c = %d,\t", i, letters[i - 0]);
	putchar('\n');
	
	printf(" blanks =\t %d \n", blank);
	printf(" other =\t %d \n", other);





}
 
// 65 - 90, 97 - 122
