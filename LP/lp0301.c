#include <stdio.h>

int main(void){
    float salB, salL, imp;
    printf("Insira o salario bruto: "); scanf("%f", &salB);
    imp = (salB < 1000 ? 0.05 : (salB < 5000 ? 0.11 : 0.35)); //Utilizando operador ternário
    salL = salB - (salB * imp);
    printf("Salario brutus: R$%.2f \nSalario liquidus: R$%.2f \nImpostaum: R$%.2f", salB, salL, imp * salB);
}