/* 1.10 - External Variables and Scope
 *
 * - Variables declaried within a function are local to that function
 *    and invisible to other peer functions.
 * - Local variables generally start existing when the function is called
 *   and dissapear when the function exits.  These vars are also known as
 *   automatic variables
 * - There are variables within the "static storage class" which retain
 *   their values but this is outside the scope of this example other than
 *   to note their existance.
 * - It's possible to define vars that are external to all functions that
 *   are global in scope and used to pass information between functions
 *   (basically anti-functional programming).
 * - External variables must be _defined_ exactly once outside of any function.
 *   This allocates storage for the variable.
 * - External variables must also be _declared_ inside any function that requires access
 *   to them.*/

#include <stdio.h>
#define MAXLINE 1000

/* External/Global variable definition */
int  max;                /* max line input size so far */
char line[MAXLINE];      /* current line */
char longest[MAXLINE];   /* saved line */

/* functions */
int getlinel(void);
void copy(void);


/* print longest input line specialized ed. */
int main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getlinel()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) /* there was a line*/
        printf("%s", longest);;
    return 0;
}


/* getline: specalized version */
int getlinel(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n' ) {
        line[i] = c;
        ++i;
            }
    line[i] = c;
    return i;
}


/* copy: specialized version */
void copy(void)
{
    int i;
    extern char line[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}

