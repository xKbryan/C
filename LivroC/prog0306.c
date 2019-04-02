#include <stdio.h>

int main(){
    float salario;
    printf("Insira o salario: "); scanf("%f", &salario);
    if(salario<=0)
        printf("Salario invalido\n");
    else
        if (salario>1000)
            printf("Imposto = %.2f\n", salario*0.10);
        else
            printf("Imposto = %.2f\n", salario *0.05);
}