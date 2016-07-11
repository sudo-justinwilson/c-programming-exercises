#include <stdio.h>

#define MAX 999

/*
 exercise 1-19: write a function revers(s) that reverses a string (s). Use it to write a program that reverses its input a line at a time.
 */
 int revers(char s[])
 {

	 for ( length = 0; s[length] != '\0'; length++ )
		 ;
	char tempstr[length+1];
	 for ( i = length, j = 0; i >= 0; i--, j++ )
	 {
		 if ( s[i] == '\0' || s[i] == '\n' )
		 	;
		 else
		 	tempstr[i] = s[i];
		 }
		 tempstr[j] = '\0';
		 printf(" %s \n", tempstr );
	 }
 }

/* getnextline:  read a line into s, return length  */    
int getnextline(char s[],int lim)    
{        
	int c, i;        
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)            
		s[i] = c;        
		
	if (c == '\n') {            
		s[i] = c;            
		++i;        
		}        
		
		s[i] = '\0';        
		return i;    
	}    
	
	/* rm_end_blanks:  copy 'from' into 'to' and remove trailing blanks */
	void rm_end_blanks(char (to[]), char from[], int length)    
	{        
		int i, j;        
		i = 0;        
		j = (length);

		// starting from the last element of line[], if last element is blank move back end of line.
		while (from[j] == '\0'|| from[j] == '\n'|| from[j] == ' ' || from[j] == '\t' ) 
			--j;
		while ( i <= j )
		{
			to[i] = from[i];
			++i;
		}
		to[i] = '\0';
	}
