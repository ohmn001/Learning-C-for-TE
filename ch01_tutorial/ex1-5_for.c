// K&R Ex 1-5: print the temperature table in reverse (300 down to 0).
#include <stdio.h>

int main(){
    int fahr;
    for(fahr=300; fahr >=0; fahr=fahr-20){
        printf("%3d %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}