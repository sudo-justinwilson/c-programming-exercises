#include <stdio.h>

#define MIN 4

#define MAX 90

  
  int getnextline(char line[], int maxline);    
  void copy(char (*to[]), char from[]);    
  
  /* print the longest input line */    
int main()    
  {       
	  int len;            /* current line length */        
	  char line[MAX];    /* current input line */        
	char *ap[MAX];

	char line_array[MAX][MAX];

	for (int r = 0; r <= MAX; r++)
	{
		for ( int c = 0; c <= MAX; c++)
		{
			line_array[r][c] = 0;
		}
	}

	int row;
	int column;
	for ( row = 0,  column = 0; (( len = getnextline(line, MAX)) >= MIN); row++)
	{
		while ( (line_array[row][column] = line[column] ) != '\0' )
			++column;
		line_array[row][++column] = '\0';
	}
	for (int r = 0; r <= MAX; r++)
	{
		for ( int c = 0; c <= MAX; c++)
		{
			printf("%c", (line_array[r][c]));
		}
	}
	/*

	int var = 0;
	for ( var =0; var < row; var++ )
		printf("%s", line_array[var] );

*/
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
	
	/* copy:  copy 'from' into 'to'; assume to is big enough */    
	void copy(char (*to[]), char from[])    
	{        
		int i;        
		i = 0;        
		
		while (((*to[i]) = from[i]) != '\0')            
			++i;    
	}
