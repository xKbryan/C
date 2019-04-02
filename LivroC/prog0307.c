#include <stdio.h>

int main(void){
    float salB, salL, imposto;
    printf("Insira o salario brutus: "); scanf("%f", &salB);
    if (salB < 1000)
        imposto = salB*5/100;
    else if (salB >= 1000 && salB < 5000)
        imposto = salB*11/100;
        else
            imposto = salB*35/100;
    salL = salB-imposto;
    printf("Salario brutus: %.2f \nSalario liquido: %.2f \nImposto: %.2f", salB, salL, imposto);
}