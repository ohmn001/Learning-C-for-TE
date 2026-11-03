// K&R 1.5.2: count characters with while. Prints the running count for learning.
#include <stdio.h>

int main(){
    long nc = 0;
    while(getchar()!=EOF){//รับ enter เข้าไปด้วยสำหรับ getchar() nc เลยดูเหมือน +2 เพราะมีการรับ input มา 2 รอบ
        ++nc;
        printf("%ld\n", nc);    
    }
    printf("count value pass by getchar() = %ld\n", nc);  
    return 0;
}