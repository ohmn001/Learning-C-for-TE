#include <stdio.h>
/* count characters in input; 2nd version */
int main()
{
    // double: counts very large inputs without overflowing an int.
    // The for body is an empty statement (;) on purpose: all the work
    // (read a char, increment nc) is in the loop header.
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}