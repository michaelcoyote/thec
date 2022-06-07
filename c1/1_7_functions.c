#include <stdio.h>

/* function example 1.7
 *
 * Simple implementation of a
 * function to raise a base integer to a power.
 * Introduced:
 * - function definitions and prototypes
 * - the `return` keyword
 * - function parameters and arguments
 * - variable scope
 *
 * Things to note:
 * since power() is declared as an int, it
 * acts like an int when used and formats/prints
 * as an int
 * varibles used within a function have local scope
 * */

/* function prototype
 * this needs to agree with the definiton below but
 * the variables are optional and do not need to match
 * as long as the types match. e.g. int power(int, int)*/
int power(int m, int n);

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        // note the calls to the power function as ints
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}


// function definition with parameters base and n
int power(int base, int n)
{
        int i, p;

        p = 1;
        for (i = 1; i <= n; ++i)
            p = p * base;
        return p;
}
