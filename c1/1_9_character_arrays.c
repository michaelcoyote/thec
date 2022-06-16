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
 *     - getline: Will need to detect EOF and return the lenght of the line for testing or 0 to
 *                signal that the end of the file was reached as even an empty line has a length
 *                of 1 including the \n character.
 *     - copy:    This function will copy a line to it's save spot.
 *     - main:    Contains the main overarching logic, spcifically the loop where we find the
 *                longest line, but also where we detect the end of the end of tile and print
 *                the result.  The previous two functions are called from here.
 *
 *     Notes: I also added the lenght of the biggest line into the output along with a newline
 *      simply because
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


/* getline - read line into s and return lenght */
int getlinel(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy - from -> to */
void copy(char to[], char from[])
{
    int i;
    i =0;
    while ((to[i] = from[i]) != '\0')
        ++i;

}
