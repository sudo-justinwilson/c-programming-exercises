

/* this is a working histogram, but it's not pretty... */

#include <stdio.h>

#define MAX 100

int getword( int max);

int main()
{
	int count = 0;
	int range, j;
	int longest = 0;
	int frequency = 0;
	int v;			// vertical axis
	int h;			// horizontal axis
	int length[MAX];
	
	for ( j = 0; j <= MAX; j++)
		length[j] = 0;

	while (( count = getword(MAX)) > 0 )
	{
		printf(" length: %d  \n", count );
		if ( count > longest )
			longest = count;
		length[count] += 1;
	}
	for ( range = 0; range <= longest; range++)
	{
		printf("length[%d] equals: \t %d \n", range, (length[range]));
		if ( (length[range]) > frequency)
			frequency = (length[range]);
	}
	printf("highest frequency equals: \t %d \n", frequency);

	for ( v = frequency; v >= 1; v--)
	{
		for ( h = 0; h <= longest; h++)
		{
			if ( h <= 0 )
				printf("%3d |", v);
			if ( (length[h]) >= v)
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
	for ( h = 0; h <= longest; h++)
	{
			if ( h == 0 )
				printf("len: ");
			printf("%d", h);
	}
	putchar('\n');
	return 0;
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
