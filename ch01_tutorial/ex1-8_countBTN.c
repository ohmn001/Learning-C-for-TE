// K&R Ex 1-8: count blanks, tabs and newlines in the input.
#include <stdio.h>

int main(){
    int blank,tabs,lines;;
    blank =0;
    tabs=0;
    lines=0;
    int c ;
    
    //ต้องnote ลงใน progress ว่ายังซับสนการประกาศตัวแปร getchar นอกloop กับ ใน loop in this case ที่สามารถทำให้เกิด infinite loop ได้
    while((c = getchar()) != EOF){
        if(c == ' '){
            blank++;
        }if(c == '\t'){
            tabs++;
        }if(c == '\n'){
            lines++;
        }
    }
    printf("sum of value blank=%d ,tabs=%d,lines=%d",blank,tabs,lines);
    return 0;
}