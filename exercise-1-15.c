#include<stdio.h>

float fahr2cels ( int fahr );
int main(int argc, char *argv[])
{
		if ( argc < 2 )
				printf ("ERROR");

		float fahr = argv[2];


		printf (" celsius equals: \t %f \n", ((float)fahr2cels(fahr);
		return 0;
}
	
/*print Fahrenheit-Celsius table*/

float fahr2cels(int fahr)
{
	float celsius

	celsius = ( 5 * (fahr - 32) / 9)
	return celsius;
}
	
