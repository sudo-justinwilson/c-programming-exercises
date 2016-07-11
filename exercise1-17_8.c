#include <stdio.h>

#define LENGTH 10

int main()
{
	char *string[LENGTH];

	int i = 0;

	for ( i = 0; i < LENGTH; i++)
		string[i] = "hello";

	for ( i = 0; i < LENGTH; i++)
	{
		printf("%s \n", string[i]);
	}
	return 0;
}
