#include <stdio.h>

main()
{
	int c = 0;

	while ( (c = getchar()) != EOF )
		putchar(-1);

	return 0;
}
