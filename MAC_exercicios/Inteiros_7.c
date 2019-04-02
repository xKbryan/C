#include <stdio.h>

int main(void)
{
    int n, total = 0;
    printf("Insira um numero: "); scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(i%2 == 0)
            total = total + i;
    }
    printf("%d", total);
    return 0;
}
