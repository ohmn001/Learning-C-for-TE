#include <stdio.h>
/* count lines in input */
int main()
{
    // A line is counted by its newline character, so a last line without
    // a trailing \n is not counted.
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("number of line = %d\n", nl);
}