#include <stdio.h>

int main(void){
    float n1, n2, total;
    printf("Insira dois valores, respectivamente: "); scanf("%f%f", &n1, &n2);
    if(n2 != 0){
        total =  n1 / n2;
        printf("%.f / %.f = %.2f", n1, n2, total);
    }
    else
        printf("Nn foi possivel calcular, pois nn existe divisao por 0");
}