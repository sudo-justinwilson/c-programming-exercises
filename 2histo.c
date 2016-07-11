#include <stdio.h>

#define IN 0		/* inside a word */
#define OUT 0		/* outside a word */

/* count letters in word */

main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while (( c = getchar()) != EOF)
	{
		if ( c == ' ' || c == '\n' || c == '\t' )
		{
			if (nc)
				printf("%d \n", nc);
			state = OUT;
		}
		else
		{
			 if ( state == OUT )
			 {
				 state = IN;
				++nw;
				++nc;
			 }
			else
				++nc;

		}
	}
}
		
			


