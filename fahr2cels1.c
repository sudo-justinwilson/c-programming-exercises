#include <stdio.h>

int fahr2cels( int fahr );

int main()
{
	int fahr = 40;
	int n = 0;
	printf(" celsius equals: \t %d \n", (fahr2cels(fahr)));
	return 0;
}

int fahr2cels( int fahr)
{
	int cels = 0;
	cels = (5 * (fahr - 32) / 9);

	return cels;
}
