#include <stdio.h>

int main()
{
	char string[];


	for ( int i = 0, int j = 0; ((c = getchar()) != EOF); i++)
	 {
		 char string1[ i + 1];
		 char string1[i] = c;

		 string1[ i + 1] = '\0';

		 copy


/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy( char to[], char from[])
{
	int i;

	i = 0;

	while (( to[i] = from[i] ) != '\0' )
		++i;
}
