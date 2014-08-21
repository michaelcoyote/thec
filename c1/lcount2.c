#include <stdio.h>


/* line count */

main ()
{
	int c,nl;
	nl = 0;

	while ((c = getchar()) != EOF)
		if (c == ('\n'||'\t'||' '))
			++nl; 
	printf("%d\n",nl);
	
}

