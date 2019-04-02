#include <stdio.h>

int main(void){
    int n, c = 65;
    printf("Insira um valor: "); scanf("%d", &n);
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i; j++)
        putchar(c);
    c++;
    putchar('\n');
    }
}