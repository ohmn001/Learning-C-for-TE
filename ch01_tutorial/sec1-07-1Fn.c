// K&R 1.7: functions. power(base, n) returns base to the n-th power.
#include <stdio.h>
// Prototype: lets main call power() before its definition, and the compiler
// checks the argument types.
int power(int base, int n);

int main(){
    int i;
    for(i=0;i<10;++i){
        printf("i = %d: %d %d\n",i,power(2,i),power(-3,i));
    }
    return 0;
}

int power(int base, int n){
    int i,p;
    p=1;
    for(i=1;i<=n;++i){
        p = p* base;
    }
    return p;
}

//2: 2,4
//3: 2,4,8
//4: 2,4,8,16