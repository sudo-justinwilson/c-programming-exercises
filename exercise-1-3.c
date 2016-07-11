#include <stdio.h>

main() /* cesius to fahrenheit table (float version)*/
{

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/*start of table */
	upper = 300;	/* end of table */
	step = 20;		/* size of steps */


	fahr = lower;
	printf("%3s %6s\n", "fahr", "celsius");
	while ( fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}	
