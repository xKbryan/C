#include <stdio.h>

int main(void){
    int a, b;
    printf("Insira dois valores A e B, respectivamente: "); scanf("%d%d", &a, &b);
    if(a >= 0){
        if(b > 10)
            printf("B e muito grande");
    } else
        printf("A tem um valor negativo");
}