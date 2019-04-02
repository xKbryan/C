#include <stdio.h>

int main(){
    int x;
    printf("Insira um inteiro: "); scanf("%d", &x);
    if(x >= 0)
        printf("Numero positivo");
    else
        printf("numero negativo");
}