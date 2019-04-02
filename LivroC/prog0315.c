#include <stdio.h>

int main(void){
    float sal, imposto = 0;
    char sexo;
    printf("Insira seu salario e seu sexo (M, F), respectivamente: "); scanf("%f %c", &sal, &sexo);
    switch (sexo)
    {
        case 'm' : case 'M': imposto = imposto + 0.05;
        case 'f' : case 'F': imposto = imposto + 0.10;
    }
    printf("Salario liquido: %.2f \nImposto: %.2f", sal-(sal*imposto), sal*imposto);
}