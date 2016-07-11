#include <stdio.h>

#def MAX 8

int main()
{

	
	int i = 0;
	char string[MAX];

	for ( int f = 0; ((c = getchar()) != EOF); f++)
	{
		if ( f == MAX)
		{
			i += MAX;	
			int t = f;

			char string2[i];

			while ( (int k = 0) <= f )
			{
				string2[k] = string[k];
				++i;

			}

		}

	}
