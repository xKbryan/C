#include <stdio.h>

int main(void)
{
    int n, total = 1;
    printf("Insira um numero para fatorar: "); scanf("%d", &n);
    for(int i = n; i > 1; i--){
        total = total * i;
    }
    printf("%d", total);
    return 0;
}