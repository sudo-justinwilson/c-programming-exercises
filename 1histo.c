#include <stdio.h>

#define MAX_LENGTH 1000

int getword();

int main()
{
	int letter_count[MAX_LENGTH];
	int longest_word = 0;
	int count = 0;
	char i, c;
	i = c = 0;

	for ( i = 0; i <= MAX_LENGTH; i++ )
		letter_count[i] = 0;


	while (( count = getword()) >= 0 )
	{
		if (count > longest_word)
			longest_word = count;
		++(letter_count[count]);
	}
	printf("longest word:\t %d", longest_word);
	for ( i = 0; i <= longest_word; i++)
	{
		printf("letter_count[%d] == %d \n", i, letter_count[i]);
	}


}

/* getword: Start counting letters from the first non blank, until the first blank (space, tab or cr).
*/
int getword()
{
	char input = 0;
	int iw = 0;
	int letter_count = 0;

	while (( input = getchar()) != EOF )
	{
			if ( input != ( ' ' || '\t' || '\n' ))
			{
				if (iw = 0)
					iw = 1;

				++letter_count;
			}
			else if ( input == ( ' ' || '\t' || '\n') )
				 if (iw == 1)
					iw = 0;
					return letter_count;
	}
	return 0;
}




