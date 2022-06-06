#include <stdio.h>

/* Print the Celsius to Farhenheit table
	for fahr = 0,20, ..., 200 */

int main ()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 	/* lower bound of temp table */
	upper = 100; 	/* upper limit */
	step = 2;	/* step size */

	fahr = lower;
	printf("%3s  %5s\n", "C","F");
	while (celsius  <= upper) {
		fahr = celsius * 9.0/5.0 + 32 ;
		printf ("%3.0f %6.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
