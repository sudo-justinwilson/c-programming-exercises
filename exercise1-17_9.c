#include <stdio.h>

#define MAX 10

int getnextline(char line[], MAX );
void copy( char *to, char from[]);
int main()
{
	char *string[MAX];
	char c = 0;
	int d = 0;
	char line[MAX];
	int i = 0;

	for ( i = 0; ( len = ( getnextline(line, MAX)) > 0); i++ )
	{
		copy ( string[i], line);
	}


	int k = 0;	
	while ( k <= MAX )	
	{
		printf("%s \n", string[0]);
		string += 1;
		++k;
	}



	}
	return 0;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char (*to[]), char from[])
{
              int i;
              i = 0;

              while (((*to[i]) = from[i]) != '\0')
                      ++i;
      }

// getnextline:  read a line into s, return length  
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
