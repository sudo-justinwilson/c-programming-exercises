#include <stdio.h>

/*Exercise 1-8: Count blamks, tabs and newlines. */

main()
{

	int c, nl, nt, nb;

	nl = nt = nb = 0;
	
	while ((c = getchar()) != EOF)
	{
	
		if (c == '\n')
			++nl;

		if (c == '\t')
			++nt;

		if (c == ' ')
			++nb;
	
	}
	printf("The number of new lines: %d\n", nl);
	printf("The number of tabs: %d\n", nt);
	printf("The number of blank spaces: %d\n", nb);

}
