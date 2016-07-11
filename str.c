#include <stdio.h>

int main()
{
	char str[] = "hello world";

	char *str2;

	
	int i = 0;
	while ( str[i] != '\0' )
		str2[i] = str[i++];

	str2[++i] = '\0';

	printf(" %s \n ", str2);
	return 0;
}
