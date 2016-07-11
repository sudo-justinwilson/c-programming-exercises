

  #include <stdio.h>    
  
  #define MAXLINE 1000   /* maximum input line length */    
  #define MINLINE 8   /* minimum length of the line to be printed */
  
  int getnextline(char line[], int maxline);    
  void multi_d_copy(char to[], char from[]);    
  
  /* print the longest input line */    
  main()    
  {        
	  int len;            /* current line length */        
	  int max;            /* maximum length seen so far */        
	  char line[MAXLINE];    /* current input line */        
	  char longest[MAXLINE]; /* longest line saved here */        
	  char linesoverminlength[MAXLINE][MAXLINE];	// to store lines over the prescribed minimum length
	  
	  int a;
	  int i = 0; 

	  for ( a = 0; a <= MAXLINE; a++ )
	  {
		  for ( i = 0; i <= MAXLINE; i++ )
		  {
			  (linesoverminlength[a])[i] = 0;
		//	  printf("a: \t %d i: \t %d", a, i);
		  }
	  }
	  
//	  max = 0;        
	for ( int a = 0; a <= MAXLINE; a++ )
	{
		  while ((len = getnextline(line, MAXLINE)) > MINLINE)            
		{
			multi_d_copy((linesoverminlength[a])[i], line); 
			++i;
		}

	}

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
	
	/* multi_d_copy:  multi_d_copy 'from' into 'to'; assume to is big enough     */
	void multi_d_copy(char to[], char from[])    
	{        
		int i;        
		i = 0;        
		
		while ((to[i] = from[i]) != '\0')            
			++i;    
	}
	
