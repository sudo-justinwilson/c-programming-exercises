#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER   1024
#define SPACE        (char)' '
#define TAB          (char)'\t'

int CalculateNumberOfSpaces(int Offset, int TabSize)
{
	   return TabSize - (Offset % TabSize);
}

int main(void)
{
  char  Buffer[MAX_BUFFER];
  int TabSize    = 5; /* A good test value */

  int i, j, k;

  while(fgets(Buffer, sizeof(Buffer), stdin))
  {
     for(i = 0; Buffer[i] != '\0'; i++)
     {
      if(Buffer[i] == TAB)
      {
       j = CalculateNumberOfSpaces(i, TabSize);
       for(k = 0; k < j; k++)
       {
	putchar(SPACE);
	}
}
	else
	{
		putchar(Buffer[i]);
	}
	}
	}
	return 0;
}

