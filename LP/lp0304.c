#include <stdio.h>

int main(void){
    float salB, salL, imp;
    char sexo;
    printf("Insira o salario bruto e o sexo hehe, respectivamente: "); scanf("%f %c", &salB, &sexo);
    imp = 0.2;
    switch(sexo){
        case 'f' : case 'F' : imp -= 0.05;
        case 'm' : case 'M' : imp -= 0.05;
    }
    salL = salB - salB * imp;
    printf("Salario brutus: R$%.2f \nSalario liquidus: R$%.2f \nImpostus: %.2f", salB, salL, imp);
}