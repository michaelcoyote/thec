#include <stdio.h>


/* copy input to output
 *
 * Introduce pre/postfix operators
 * prefix used in example
 * Uses while loop*/

int main ()
{
	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n",nc);

}

