#include <stdio.h>

int main(){
    float s_bruto, s_liquido;
    printf("Insira o salario: "); scanf("%f", &s_bruto);
    if(s_bruto<100000)
        s_liquido = s_bruto+1000;
    else
        s_liquido = s_bruto;
    printf("Salario liquido: %.2f", s_liquido);
}