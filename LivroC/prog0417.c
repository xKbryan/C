#include <stdio.h>

int main(void){
    int n;
    char c;
    printf("Insira um valor: "); scanf("%d", &n);
    printf("Insira um char: "); scanf(" %c", &c);
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= n; j++)
        putchar(c);
    putchar('\n');
    }
}