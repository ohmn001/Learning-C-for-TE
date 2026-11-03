// K&R 1.2: Fahrenheit -> Celsius table with a while loop.
#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    
    while(fahr <= upper){
        // Multiply first, divide last: integer division drops decimals,
        // so (5/9)*(...) would be 0 every time.
        celsius = 5* (fahr-32) / 9 ;
        printf("%3d %6d\n" ,fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}