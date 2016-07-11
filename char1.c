#include <stdio.h>

int main()
{
	char *test = "j";

	test += 1;
	++test;
	test = '\0';

	printf("%s \n", test);

}
