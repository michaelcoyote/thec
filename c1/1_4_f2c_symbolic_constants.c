#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* Step size */

/* Print f to c table
 *
 * This was the same program used in
 *  1.3 - The For Statement but with
 *  symbolic constants added using
 *  define.
 *
 *  Introduced:
 *  - For loop (in 1.3)
 *  - #define which defines text which is then replaced
 *    by the defintion i.e a symbolic constant. */

int main ()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}

