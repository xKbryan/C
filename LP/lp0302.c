#include <stdio.h>

int main(void){
    float salB, salL, imp;
    char estC;
    printf("Insira o salario bruto e o estado civil, respectivamente: "); scanf("%f %c", &salB, &estC);
    switch (estC){
        case 'c' : case 'C' : imp = 0.09; break;
        case 's' : case 'S' : imp = 0.10; break;
        default: printf("Opcao invalida\n"); break;
    }
    salL = salB * imp;
    printf("Salario brutus: R$%.2f \nImpostaum a pagar: R$%.2f", salB, salL);
}