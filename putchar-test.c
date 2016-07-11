#include <stdio.h>

main() {

	int t = '\t';
	int b = '\b';
	int s = '\\';

	printf("putchar(t):");
	putchar(t);
	printf("After putchar()");
	printf("\nputchar(b):");
	putchar(b);
	printf("After putchar()");
	printf("\nputchar(s):");
	putchar(s);
	printf("After putchar()");

}
