#include <stdio.h>

#define MAX 999

/*
 exercise 1-19: write a function revers(s) that reverses a string (s). Use it to write a program that reverses its input a line at a time.
 */
char revers(char s[]);
int getnextline(char s[],int lim);    

int main()
{
	char s[MAX];
	int len = 0;

	while ( (len = (getnextline(s, MAX)) > 1 ) )
	{
		revers(s);
		printf("%s\n", s );
	}
	return 0;
}




char revers(char s[])
{
	int i, j;
	int length = 0;

	 for ( length = 0; s[length] != '\0'; length++ )
		 ;
	printf(" length equals: %d \n ", length );
	char tempstr[length];
	 for ( i = length, j = 0; i >= 0; i-- )
	 {
		 if ( s[i] == '\0' || s[i] == '\n' )
			 ;
		 else tempstr[j++] = s[i];
	}
	 tempstr[j] = '\0';
	for ( i = 0; tempstr[i] != '\0'; i++ )
		s[i] = tempstr[i];
//	return s;
}

/* getnextline:  read a line into s, return length  */    
int getnextline(char s[],int lim)    
{        
	int c, i;        
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)            
		s[i] = c;        
		
	if (c == '\n') 
		;
	{            
		s[i] = c;            
		++i;        
	}        
	s[i] = '\0';        
	return i;    
}    
