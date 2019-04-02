#include <stdio.h>

int main(void)
{
    int n;
    printf("Insira um numero: "); scanf("%d", &n);
    n = n * 2;
    for(int i = n; i > 0; i--){
        if(i%2)
            printf("%d\n", i);
    }
    return 0;
}