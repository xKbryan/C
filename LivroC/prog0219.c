#include <stdio.h>

int main (){
    float x;
    printf("Insira um numero real: "); scanf("%f", &x);
    printf("Parte inteira \t\t: %d\n", (int) x);
    printf("Parte fracionaria \t: %f\n", x-((int) x));
}