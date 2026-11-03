// K&R Ex 1-3: same table, with a heading line above it.
#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    printf("Fahrenheit Celsius\n");
    while(fahr <= upper){
        celsius = 5* (fahr-32) / 9 ;
        // Fixed widths (%3d, %6d) right-align the columns like a result table.
        printf("%3d %6d\n" ,fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}