#include <stdio.h>

/* function example 1.8
 *
 * Second version of the power function demonstrating
 * how the function operates on a local copy of it's
 * variables and doesn't change the origionals.  This
 * allows the programmer to avoid unnecessary varibles
 * the function also recurses down to a zero state when
 * computing the power.*/
int power(int m, int n);

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}


// function using "call by value"
int power(int base, int n)
{
        int p;

        for (p = 1; n > 0 ; --n)
            p = p * base;
        return p;
}
