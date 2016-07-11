#include <stdio.h>

#define MAXword 1000 	// maximum input

int getword(char word[], int maxword);    
void copy(char to[], char from[]);    

/* print the longest input word */    
main()    
{        
	int len;            /* current word length */        
	int max;            /* maximum length seen so far */        
	char word[MAXword];    /* current input word */        
	char longest[MAXword]; /* longest word saved here */        
	
	max = 0;        
	while ((len = getword(word, MAXword)) > 0)            
		if (len > max) 
		{                
			max = len;                
			copy(longest, word);            
		}
	if (max > 0)  /* there was a word */            
		printf("%s", longest);        
	return 0;    }    
	
	/* getword:  read a word into s, return length  */    
	int getword(char s[],int lim)    
	{        
		int c, i;        
		for (i=0; i < lim-1 && (c=getchar())!=EOF && c!=' ' && c!='\t' && c!='\n'; ++i)            
			s[i] = c;        
		if (c == ' ' || c == '\t' || c == '\n') 
		{            
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
