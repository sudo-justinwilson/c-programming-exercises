#include <stdio.h>

int atoi(char s[]);
/*echo command line arguments (1st version: P.123 */
main( int argc, char *argv[])
{
	int i;

	for ( i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);
		printf("%s %s", num, (i < argc - 1) ? " " : "");
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
