#include <stdio.h>


/* EOF state detection Exercise 1-6 */

int main ()
{
	int c;

	while (((c = getchar()) != EOF) != 0) {
		putchar (c);
	}
		printf ("0 - The end\n");

}

