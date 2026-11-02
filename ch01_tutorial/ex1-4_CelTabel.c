#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 25;
    celsius = lower;
    
    printf("Celsius Fahrenheit\n");
    //celsius = 5* (fahr-32) / 9 ;
    //fahr = (celsius*9/5 ) + 32
    while(celsius <= upper){
        fahr = (celsius*9/5) + 32;
        printf("%3d %6d\n" ,celsius,fahr);
        celsius = celsius + step;
    }
    return 0;
}