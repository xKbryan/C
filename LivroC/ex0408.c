#include <stdio.h>

int main(void){
    int n;
    printf("Insira um valor: "); scanf("%d", &n);
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i; j++)
        putchar('*');
    putchar('\n');
    }
}