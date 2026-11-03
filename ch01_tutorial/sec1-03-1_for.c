// K&R 1.3: the temperature table again, using for instead of while.
#include <stdio.h>

int main(){
    int fahr;
    // 5.0/9.0 (floating point) because 5/9 in integers is 0.
    for(fahr=0; fahr <=300; fahr=fahr+20){
        printf("%2d %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}