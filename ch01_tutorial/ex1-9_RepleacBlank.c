// Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>
int main(){
    int blank = 0;
    int c = getchar();
    // prev_c lets us spot a run of blanks: print a blank only if the one before was not a blank.
    int prev_c =0;
    
    while((c = getchar()) != EOF){
        if(c != ' ' || prev_c != ' '){
            putchar(c);
        }
        prev_c = c;
    }
    return 0;
}