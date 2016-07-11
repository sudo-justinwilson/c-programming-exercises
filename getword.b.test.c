
#include <stdio.h>

int main()
{
	int c, count;
	count = 0;

	for  ( c = 0; ( c = getchar()) != EOF; c++)
	{
		 getword(c, count);
	}
	printf(" word length equals: \t %d ", count);
	return 0; } int getword( int stream, int length )
{


	if ( stream != ' ' || stream != '\t' || stream != '\n' )
	{
		++length;
	}
	else if ( length > 0 )
	{
		return length;
	}
}
