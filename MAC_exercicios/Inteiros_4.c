#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, n;
    printf("Insira dois valores. A base e o expoente, respectivamente: "); scanf("%d%d", &x, &n);
    printf("%.f", pow(x, n));
    return 0;
}