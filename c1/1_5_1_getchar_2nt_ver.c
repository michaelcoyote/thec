#include <stdio.h>


/* copy input to output
 *
 * This works the same as v1 but
 * makes c = getchar() in the loop
 * test to make for more compact code.*/

int main ()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar (c);
	}

}

