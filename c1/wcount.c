#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /*outside a word */

/* count lines, words and characters in input
 *
 * We track the state of if we are in a word
 * or out of a word and we increment the counter
 * when we enter the word.
 * We also increment a counter every time through
 * the loop for character count and every newline
 * for the line count.
 * */


int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    /* yeah you can do this but I don't know I'd
     * want to w/o being DMR level of smart */
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);



}
