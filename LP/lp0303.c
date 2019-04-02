#include <stdio.h>

int main(void){
    float ord, aum;
    printf("Insira o ordenado para esse ano: "); scanf("%f", &ord);
    aum = (ord > 1000 ? 0.05 : 0.07);
    printf("Ordenado: R$%.2f \nOrdenado com aumento: R$%.2f \nAumento: %.2f", ord, ord * aum + ord, aum);
}