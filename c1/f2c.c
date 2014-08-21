#include <stdio.h>

/* Print the Fahrenheit to Celsius table
	for fahr = 0,20, ..., 300 */

main ()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -20; 	/* lower bound of temp table */
	upper = 300; 	/* upper limit */
	step = 10;	/* step size */

	fahr = lower;
	printf("%3s  %5s\n", "F","C");
	while (fahr <= upper) {
		/*celsius = 5 * (fahr-32) / 9;*/
		celsius = (5.0/9.0) * (fahr-32) ;
		/*printf ("%d\t%d\n", fahr, celsius);*/
		printf ("%3.0f %6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
