#include <stdio.h>


/* line/tab/blank count
 *
 * Exercise 1-8
 *
 * */

int main ()
{
	int c,nl;
	nl = 0;

	while ((c = getchar()) != EOF)
		if (c == ('\n'||'\t'||' '))
			++nl;
	printf("%d\n",nl);

}

