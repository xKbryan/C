#include <stdio.h>

int main(void){
    float sal, imposto;
    char sexo;
    printf("Insira seu salario e seu sexo (M, F), respectivamente: "); scanf("%f %c", &sal, &sexo);
    switch (sexo)
    {
        case 'f' : case 'F': imposto = sal*10/100; break;
        case 'm' : case 'M': imposto = sal*15/100; break;
        default: printf("Sexo invalido... hehe\n");
    }
    printf("Salario liquido: %.2f \nImposto: %.2f", sal-imposto, imposto);
}