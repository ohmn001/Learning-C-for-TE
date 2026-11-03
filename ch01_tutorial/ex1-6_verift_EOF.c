// K&R Ex 1-6: a comparison like != gives an int: 1 if true, 0 if false.
#include <stdio.h>

int main(void){
    int result = (getchar() != EOF);
    printf("getchar() != EOF is %d\n", result);
    return 0;
}