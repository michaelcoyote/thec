#include <stdio.h>


/* copy input to output
 *
 * Uses forloop with all the work done
 * by the test and increment sections.
 * We use a bare `;` in the body as a
 * "null statement" as required by C */

int main ()
{
	double nc;
	for  (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n",nc);
	
}

