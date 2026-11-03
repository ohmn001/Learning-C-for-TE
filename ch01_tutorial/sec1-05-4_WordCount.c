//เขียนโปรเเกรมนับ line,word,char จาก input
#include <stdio.h>
// IN/OUT make the state readable. The state remembers if we are inside a word,
// so a word is counted once (when it starts), not once per letter.
#define IN 1
#define OUT 0
int main(){
    int c, nl, nw, nc, state;
    state = OUT; //ใช้ในการนับว่ายังอยู่ในคำนั้นมั้ย
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) { //count char
        ++nc;
        if (c == '\n'){ //count line
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t'){ //ถ้าเจอพวกนี้ให้เริ่มนับคำใหม่
            state = OUT; 
        }
        else if (state == OUT) { //count word
            state = IN;
            ++nw;
        }
    }

    printf("line = %d, \nword = %d, \nchar = %d, \n", nl, nw, nc);
    
    return 0;
}