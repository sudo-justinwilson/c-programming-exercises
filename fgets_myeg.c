#include <stdio.h>

#define MAX_BUFFER 1024

int main()
{
	char line[MAX_BUFFER];

	if ((fgets(line, MAX_BUFFER, stdin)) != NULL)
		puts(line);

	return 0;
}
