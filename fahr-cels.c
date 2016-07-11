#include<stdio.h>

/*print Fahrenheit-Celsius table*/

main()
{
	
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;		/*lower limit of temperature*/
	upper = 300;		/*upper limit*/
	step = 20;		/*step size*/

	fahr = lower;			/*Table starts at 0*/
	
	while (fahr <= upper) {		/*if fahr is -lt 300, do */
	celsius = 5 * (fahr - 32) / 9;	/*cels = (5 * (fahr - 32) / 9)*/
	printf("%d \t %d\n", fahr, celsius);	/* print fahr, cels*/
	fahr = fahr + step;		/*increase by step and do it again*/
	}
}
