
#include <stdio.h>

#define MIN 80

#define MAX 9

  
  int getnextline(char line[], int maxline);    
  void copy(char (*to[]), char from[]);    
  
  /* print the longest input line */    
  main()    
  {       
	  // new code


	  int len;            /* current line length */        
//	  int max;            /* maximum length seen so far */        
	  char line[MAX];    /* current input line */        
//	  char longest[MAX]; /* longest line saved here */        
	char (*ap[MAX]);

	char line_array[MAX][MAX];

	for (int r = 0; r <= MAX; r++)
	{
		for ( int c = 0; c <= MAX; c++)
		{
			line_array[r][c] = 0;
		}
	}
/*
	for (int r = 0; r <= MAX; r++)
	{
		for ( int c = 0; c <= MAX; c++)
		{
			printf("row %d column %d euals: %d \n", r, c, (line_array[r][c]));
		}
	}
	return 0;
  
	*/  
	  
//	  max = 0;        
	  for ( int row = 0; row <= MAX; row++) 
	  {
		  for ( int column = 0;  ((len = getnextline(line, MAX)) > MIN); column++)
		  {                
//			  max = len;                
			  copy(&(line_array[row][column]), line);            
		  }
	}
	for (ap = &(line_array); ap <= column; (ap)++)
	{
		int inc = 0;
		while (ap[inc] != '\0')
			putchar(ap[inc++]);

	}
	
	return 0;
}

	  

	  
	  // end new code 


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
