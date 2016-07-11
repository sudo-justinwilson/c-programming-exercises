


#include <stdio.h>

#define MIN 80

#define MAX 999

  
  int getnextline(char line[], int maxline);    
  void rm_end_blanks(char (to[]), char from[], int length);    
  
/*
Exercise 1-18: print characters over 80 chars.
*/
  main()    
  {       
	  int len;            /* current line length */        
	static int row;		/* row of 2d array */
	  char line[MAX];    /* current input line */        
	  int k = 0;		// counter to see how far we go

	char (*ap[MAX]);

	char line_array[MAX][MAX];

	for (int r = 0; r <= MAX; r++)
	{
		for ( int c = 0; c <= MAX; c++)
		{
			line_array[r][c] = 0;
		}
	}
	  for (  row = 0; row <= MAX; row++) 
	  {
		  for ( int column = 0;  ((len = getnextline(line, MAX)) > 0); column++)
		  {                
			if ( len > 1 )
			{
			  	rm_end_blanks(line_array[k], line, len);           // passes 1st element of line_array, which is itself an array 
				++k;
				
			}

		  }
	}
	for ( int r = 0; r < k; r++ )
		printf("%s ", line_array[r] );
	
	
	return 0;
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
	
	/* rm_end_blanks:  copy 'from' into 'to' & remove trailing blanks */
	void rm_end_blanks(char (to[]), char from[], int length)    
	{        
		int i, j;        
		i = 0;        
		j = (length);

		while (from[j] == '\0'|| from[j] == '\n'|| from[j] == ' ' || from[j] == '\t' ) 
			--j;
		while ( i <= j )
		{
			to[i] = from[i];
			++i;
		}
		to[i+1] = '\0';
	}
