
#include <stdio.h>

int main()
{
	int count = 0;
	int c = 0;

	c = getchar();
	
	while (! ( count =  getword(c++)))
//		;
//	while (( count = (getword( c = getchar()) == 0 )))
//		;
	printf("count: \t", count );
//	return 0;	
//		 getword(c, count);
	printf(" word length equals: \t %d ", count);
	return 0;  
}
	
int getword( int stream )
{
	int length = 0;
	if ( stream != ' ' || stream != '\t' || stream != '\n' )
	{
		++length;
	}
	else if ( length > 0 )
	{
		return length;
	}
}
