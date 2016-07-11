
#include <stdio.h>

int atoi(char s[]);
/* fahr2cels: return the celsius equivalent of a of a fahrenheit temperature */
main( int argc, char *argv[])
{
	int i;
	int cels = 0;
	int fahr;

	for ( i = 1; i < argc; i++)
	{
		fahr = (atoi(argv[i]));
		printf(" string equals: %s \n celsius equals: \t %d", argv[i], (5 * (fahr - 32) / 9));
	}
	printf("\n");
		return 0;
}


/* atoi:  convert s to integer */    
int atoi(char s[])    
{        
	int i, n;
	n = 0;        
	
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)            
		n = 10 * n + (s[i] - '0');        
	return n;    
}
