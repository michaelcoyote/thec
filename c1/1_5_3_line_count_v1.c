#include <stdio.h>


/* line count
 *
 * We simply count newlines */

int main ()
{
	int c,nl;
	nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n",nl);

}

