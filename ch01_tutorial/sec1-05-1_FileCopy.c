#include <stdio.h>
//c = getchar() --> คำสั่งในการเก็บ char ตัวต่อไปใน input ไว้ใน c
//putchar(c) --> print ค่าของ c ออกมาเป็น int  

int main(){
    // int, not char: c must hold every character AND EOF (-1) without mixing them up.
    int c;
    c = getchar();
    while (c != EOF)
    {
        
        putchar(c);
        c = getchar();
    }
    return 0;
}

