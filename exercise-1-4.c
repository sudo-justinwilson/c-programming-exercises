#include <stdio.h>

main() /* fahrenheit to celsius table (float version)*/
{

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/*start of table */
	upper = 300;	/* end of table */
	step = 20;		/* size of steps */


	celsius = lower;
	printf("%3s %6s\n", "celsius", "fahr");
	while ( celsius <= upper) {
		fahr = (celsius + 32)/(5.0/9.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}	
