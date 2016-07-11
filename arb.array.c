#include <stdio.h>

int flag = 0;
char *string;

void copy( char c, int i);
int main()
{
	int i;
	char c = 0;


	for ( i = 0; ((c = getchar()) != EOF); i++)
	{

		copy( c, i);


	}
	printf(" string equals:    %s \n", string);

}

void copy( char letter, int number)
{
	char str1[number];
	extern char *string;
	int j;

	if ( flag == 0 )
	{
		extern char estr[ number + 1];
		flag = 1;
	}
	estr[number] = letter;

	for ( j = 0; j <= number; j++)
	{
		str1[j] = estr[j];
	}
	extern char estr[number + 1];

	
	for ( j = 0; j <= number; j++)
	{
		estr[j] = str1[j];
	}
	estr[ number + 1] = '\0';
	string = &estr;

	
}
	
	


