#include <stdio.h>

#define RANGE 256		// since a char is one byte, the range for the array should be 256

/*
Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input.
*/
int main()
{
	int letters[RANGE];		// array that covers all the ASCII characters
	int i= 0;
	int blank = 0;			// blanks measures spaces, tabs and new lines
	int other = 0;			// counts anything that's not a letter or space
	int c = 0;

	for ( i = 0; i <= RANGE; i++)
		letters[i] = 0;

	while (( c = getchar()) != EOF) 
	{
		if (( c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z' ))
			++letters[c - 0];		// 'char' - 0 returns numeric representation of character

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
 
