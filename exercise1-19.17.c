#include <stdio.h>

#define MAX 999

/*
 exercise 1-19: write a function revers(s) that reverses a string (s). Use it to write a program that reverses its input a line at a time.
 */
char revers(char s[]);
int getnextline(char s[],int lim);    

static int len = 0;

int main()
{
	char s[MAX];
	int d = 0;

	while ( (len = getnextline(s, MAX) )> 1  )
	{
		printf("len equals: %d", len);
		revers(s);
		for ( d = 0; d <= len ; d++ )
			printf("s[%c] equals %c \n", d, s[d]); 
		printf("%s\n", s);
	}
	return 0;
}




char revers(char s[])
{
	int i, j;
//	int length = 0;

	 // get length of string..
//	 for ( length = 0; s[length] != '\0'; length++ )
//		 ;
	printf("length equals: %d \n ", len );
	// temp string...
	char tempstr[len];
	while ( s[len] == '\0' || s[len] == '\n' )
		--len;
	printf("length equals: %d \n ", len );
	 // i equals length (including '\0'), j starts from tempstr[0] ...
	 for ( i = (len ) , j = 0; i >= 0; i-- )
	 {
		 // if string[last] is '\0' || '\n', do nothing, but stil i-- (reduce length).
		 // else tempstr[first] equals s[last]
//		 else 
		 tempstr[j] = s[i];
		 // increment s[first]...
		 ++j;
//		 }
	}
	 // append '\0' to s...
	 tempstr[j] = '\0';
	 // copy temp string back to string
	for ( i = 0; tempstr[i] != '\0'; i++ )
		s[i] = tempstr[i];
	s[i] = '\0';
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
