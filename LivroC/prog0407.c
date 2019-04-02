#include <stdio.h>

int main(void){
    int n, soma = 0, produto = 1;
    printf("Insira um valor: "); scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        soma = soma + i;
        produto = produto * i;
    }
    printf("Soma = %d \nProduto: %d", soma, produto);
}