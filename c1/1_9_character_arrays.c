#include <stdio.h>
#define MAXLINE 1000 /*max input line size*/

/* 1.9 - The Character Array
 *
 * Review the character array and how to manipulate one.
 *
 * Our sample program will test an incoming line for length.
 * if the line is longer than the current longest line we save the line as our
 * new longest line and if not we do nothing.
 * We continue this process until the end of the file at which point
 * we will return the longest line saved.
 *
 * In pseudocode:
 *
 * while (there's another line to test)
 *     if (the current line length is greater than than the length of the previous long line)
 *         copy the line
 *         save the length
 * print the longest line
 *
 * using this outline to analyze the needs of each function and their returns we can guess that
 * we will need:
 *     - getline: Will need to detect EOF and return the length of the line for testing or 0 to
 *                signal that the end of the file was reached as even an empty line has a length
 *                of 1 including the \n character.
 *                This takes the line and the maximum lenght as arguments.
 *     - copy:    This function will copy a line to it's save spot.
 *                There is no return for this function.
 *     - main:    Contains the main overarching logic, specifically the loop where we find the
 *                longest line, but also where we detect the end of the end of tile and print
 *                the result.  The previous two functions are called from here.
 *
 *     Notes: I renamed the function getline to getlinel because there's now a stdio.h function and this conflicts.
 *            I also added the length of the biggest line into the output along with a newline simply because
 *      */

int getlinel(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len; /* current line lenght */
    int max; /* current max menght so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line save slot */

    max = 0;
    while ((len = getlinel(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%d - %s\n", max, longest);
    return 0;

}


/* getlinel - read line into s and return length */
int getlinel(char s[], int lim)
{
    int c, i;

    /* check the current character for EOF or newline.  As long as we've *not* hit one of
     * those or reached the character limit, add the current character to array s[] */
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    /* newline is a character too and we didn't increment length or add it to array s[] above */
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    /* put a null terminator in the string as a signal to the copy function that it's done */
    s[i] = '\0';
    return i;
}

/* copy - from -> to */
void copy(char to[], char from[])
{
    int i;
    i =0;
    /* copy until we hit the null termination */
    while ((to[i] = from[i]) != '\0')
        ++i;
}
