#include <stdio.h>

int main(void){
    float sal;
    char estCivil;
    printf("Digite seu salario e seu estado civil (C = casado ; S = solteiro), respectivamente: "); scanf("%f %c", &sal, &estCivil);
    if (estCivil == 'C' || estCivil == 'c')
        sal = sal*10/100;
    else if(estCivil == 'S' || estCivil == 's')
        sal = sal*9/100;
    else
        printf("Sem mudança no salario por invalidade do estado civil");
    printf("Imposto: %.2f", sal);
}