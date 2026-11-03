// K&R 1.6: arrays as counters.
// Write a program to count number จากinput ที่เป็นตัวเลขว่ามีตัวเลขนั้นกี่ตัว 0-9, white space(blank-tabs-newlines), all characters
#include <stdio.h>
int main(){
    int c,i,nwhite,nother;
    // ndigit[k] = how many times digit k appeared. The digit value is the index.
    int ndigit[10];

    nwhite = nother = 0;
    for(i=0;i<10;++i){
        ndigit[i]=0;
    }
    while((c=getchar()) != EOF){
        if(c>='0' && c<='9'){
            //ASCII: '0' = 49, '1' = 50--> ถ้ารับ input มา '1' มันคือการเอา 50-49 = 1 เราจะได้เลล int มาใช้เลย
            ndigit[c-'0']++; //getchar เราจะเก็บ input มาเป็น ASCII เทคนิคนี้คือการลบเพื่อได้เลขนั้นออกมาจริงๆ  
        }else if(c == ' ' || c == '\n' || c == '\n'){
            nwhite++;
        }else{
            nother++;
        }
    }
    printf("digit = 0123456789\n");
    printf("digit = ");
    for(i=0;i<10;i++){
        printf("%d",ndigit[i]);
    }

    printf("\nnwhite = %d, nother = %d ",nwhite,nother);
    return 0;
}