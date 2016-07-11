
  #include <stdio.h>    
  
  #define MAXLINE 1000   /* maximum input line length */    
#define MINLINE 8 	/* minimum length of line  */
  
  int getnextline(char line[], int maxline);    
  void copy(char to[], char from[]);    
  
  /* print the minlengthline input line */    
  main()    
  {        
	  int len;            /* current line length */        
	  int counter;            /* generic counter */
	  char line[MAXLINE];    /* current input line */        
	  char *minlengthline[MAXLINE]; /* minlengthline line saved here */        

//	  int counter = 0;
//
//	  for (  a = 0; a <= MAXLINE; a++)
//		  for ( int b = 0; b <= MAXLINE; b++)
//			  (minlengthline[a])[b] = 0;

	char (*row)[MAXLINE];

	for ( row = &minlengthline, counter = 0; (( len =  getnextline( (row)[counter], MAXLINE ))  >= 0); (row)++ ) 
	{



	for ( counter = 0; (( len =  getnextline( line,  MAXLINE ))  >= 0); ; ) 
	{
		if ( len >= MINLINE )
		{
			copy( row[counter], line );
			++counter;
		}
	}

	  
	  max = 0;        
	  while ((len = getnextline(line, MAXLINE)) > 0)            
		  if (len > MINLINE) 
		  {                
			  minlengthline = &line;
			  ++(minlengthline);
			  ++counter;

//			  max = len;                
			  copy(minlengthline, line);            
		  }
		  for ( int i = 0; 


//		  if (max > 0)  /* there was a line */            
//			  printf("%s", minlengthline);        
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
	
	/* copy:  copy 'from' into 'to'; assume to is big enough */    
	void copy(char to[], char from[])    
	{        
		int i;        
		i = 0;        
		
		while ((to[i] = from[i]) != '\0')            
			++i;    
	}
