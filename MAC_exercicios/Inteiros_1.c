#include <stdio.h>

int main(void)
{
    int num;
    printf("Fazer o quadrado de 0 ate: "); scanf("%d", &num);
    for(int i = 0; i <= num; i++)
    {
        printf("%d\n", i*i);
    }
    return 0;
}
