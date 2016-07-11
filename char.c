#include <stdio.h>


int bits = 256;


int main()
{
	char test[] = "justin";
	int i;

	for ( i = 0; i < 5; i++ )
	{
		test[i] -= 32;
	}
	printf("%s \n", test);
	return 0;
}
	 
