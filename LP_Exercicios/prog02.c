#include <stdio.h>

int main(void){
    int n, total = 0, i = 0;
    do{
        if(i >= 20)
            break;
        printf("[%2d] Insira um valor: ", i+1); scanf("%d", &n);
        if(n < 0){
            printf("Valor negativo, favor inserir sem sinal\n");
            continue;
        }
        i++;
        total += n;
    } while (n != 0);
    printf("Total = %d", total);
}