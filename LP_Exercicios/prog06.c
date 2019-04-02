#include <stdio.h>

int main(void){
    int n;
    printf("Insira um valor para fazer a tabuada: "); scanf("%d", &n);
    for(int i = 1; i <= 10; i++)
        printf("%2d x %d = %d\n", i, n, i*n);
}