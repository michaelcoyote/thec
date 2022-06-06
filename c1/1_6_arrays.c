#include <stdio.h>

/* 1.6 arrays
 *
 * Count the number of occurances
 * of each character
 * We'll use an array to hold
 * the frequencey of the numbers
 * and individual variables for
 * whatespace and other
 *
 * Introduced:
 * - Arrays
 * - else if
 * - the c -'0' construct*/

int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    /* initialize the digit array w/ 0s */
    for (i=0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if ( c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
            nwhite, nother);

}
