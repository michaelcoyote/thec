#include <stdio.h>


/* copy input to output
 *
 * Introduced:
 * - functions getchar() and putchar()
 * - EOF as a constant defined in stdio.h
 *
 *  Goes through the input gotten by getchar
 *  and tests for EOF at which point loop ends */

int main ()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar (c);
		c = getchar();
	}

}

