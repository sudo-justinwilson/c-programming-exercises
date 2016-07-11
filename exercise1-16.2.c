
#include <stdio.h>

void copy( char to[], char from[]);

int main()
{
	char string[] = "hello";
	char *string1;

	string1 = string;
//	copy(string1, string);

	char c;
	int j = 0;


	for ( int k = 0; ((c = getchar()) != EOF); k++)
	 {
//		 char *string1;
		 string1[k] = c;

//		 string1[ k + 1] = '\0';

//		printf("before copy \n");
//		 copy(string, string1);
//
//		printf("after copy \n");

//		printf(" char: \t %c ", ((char)c));

		 j = k;

		 printf(" j equals %d \n i equals %d \n", j, k);
	}
	string1[++j] = '\0';
	copy(string1, string);

	++j;
	string[j] = '\0';

	printf(" string: \t %s \n", string);
// 	printf(" string1: \t %s \n", string1);
}


/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy( char to[], char *from)
{
	int i;

	i = 0;

	while (( to[i] = from[i] ) != '\0' )
		++i;
}
