#include <stdio.h>

int main(void){
    float c, f;
    for(float i = 0; i <= 100; i++){
        c = (i - 32) / 1.8;
        printf("Fahrenheit para Celsius: %3.f --> %.2f\n", i, c);
    }
    for(float i = 0; i <= 100; i++){
        f = (i * 1.8) + 32;
        printf("Celsius para Fahrenheit: %3.f --> %.2f\n", i, f);
    }
}