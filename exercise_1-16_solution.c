
  #include <stdio.h>    
  
  #define MAXLINE 10   /* maximum input line length */    
  
  int getnextline(char line[], int maxline);    
  void copy(char to[], char from[]);    
  
/* Exercise 1-16: Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text. */
  main()    
  {        
	  int len;            /* current line length */        
	  int max;            /* maximum length seen so far */        
	  char line[MAXLINE];    /* current input line */        
	  char longest[MAXLINE]; /* longest line saved here */        
	  
	  max = 0;        
	  while ((len = getnextline(line, MAXLINE)) > 0)            
		  if (len > max) 
		  {                
			  max = len;                
			  copy(longest, line);            
		  }
		  if (max > 0)  /* there was a line */            
			  printf("%s \n", longest);        
			  printf("%i \n", max);        
		  return 0;    
}    


/* getnextline:  read a line into s, return length  */    
int getnextline(char s[],int lim)    
{        
	int c, i;        
	
	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)            
	{
		// stop puttings chars into array when it becomes full, but still increment counter...
		if ( i >= lim - 1)
			;
		else
			s[i] = c;        
	}
		
	if (c == '\n') {            
		s[i] = c;            
		++i;        
		}        
		
		s[i] = '\0';        
		return i;    
	}    

/* copy:  copy 'from' into 'to'; assume to is big enough */    
void copy(char to[], char from[])    
{        
	int i;        
	i = 0;        
		
	while ((to[i] = from[i]) != '\0')            
			++i;    
	}
