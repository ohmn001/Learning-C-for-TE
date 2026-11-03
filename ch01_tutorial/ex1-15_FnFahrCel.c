// K&R Ex 1-15: the temperature conversion moved into its own function.
#include <stdio.h>
// Prototype so main can call cal() before it is defined below.
int cal(int fahr);

int main(){
    int fahr;
    int lower, upper,step;
    lower = 0;
    upper = 300;
    step = 20;

        for(fahr=lower; fahr<=upper; fahr+=step){
        printf("%d %d\n",fahr,cal(fahr));
    }
    return 0;
}

int cal(int fahr){
    int celsius = 5*(fahr-32) / 9 ;
    return celsius;
}