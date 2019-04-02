#include <stdio.h>

int main(void)
{
    int n, total = 0;
    printf("Soma de 1 ate: "); scanf("%d", &n);
    for(int i = n; i > 0; i--){
        total = total + i;
    }
    printf("%d", total);
    return 0;
}
