#include <stdio.h>

void main() 
{
	int i;

	for (i = 1; i <= 100; i++) 
	{
		if (( i % 4) == 0) 
		{
		printf(" fizz \n");
		}
		else if (( i % 5) == 0) 
		{
		printf(" buzz \n");
		} 
		else printf(" %i \n", i);
	} 
}
