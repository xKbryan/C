#include <stdio.h>

int main(void){
    float sal, aumento;
    printf("Insira um salario: "); scanf("%f", &sal);
    (sal > 1000) ? (aumento = sal*5/100) : (aumento = sal*7/100);
    printf("Salario brutus: %.2f \nSalario liquido: %.2f \nAumento: %.2f", sal, sal+aumento, aumento);
}

/*
int main(void){
    float sal, aumento;
    printf("Insira um salario: "); scanf("%f", &sal);
    if(sal > 1000)
        aumento = sal*5/100;
    else
        aumento = sal*7/100;
    printf("Salario brutus: %.2f \nSalario liquido: %.2f \nAumento: %.2f", sal, sal+aumento, aumento);
}*/