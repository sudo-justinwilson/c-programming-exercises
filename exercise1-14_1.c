

#include <stdio.h>

#define MAX 100

int getword( int max);

int main()
{
	int count = 0;
	int range, j;
	int longest = 0;
	int x, y, z;
	x = y = z = 0;
	int k = 0;
	int length[MAX];
	
	for ( j = 0; j <= MAX; j++)
		length[j] = 0;

	for ( x = 0; ( count = getword(MAX) > 0); x++)
	{
		length[x] = count;
	}
	for ( y = 0; y < x; y++)
		for ( z = 0; z < length[y]; z++)
			putchar('#');
	putchar('\n');
}

/* getword: count letters in word and return length */
int getword(limit)
{
	int i, c;
	i = c = 0;

	while (( --limit > 0) && (( c = getchar()) != EOF) && ( c != ' ' && c != '\t' && c != '\n' ))
		++i;
	return i;
}
