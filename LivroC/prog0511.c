#include <stdio.h>
//Função de potência
float pot(float x, int n){
    float res;
    int i;
    for(i = 1, res = 1.0; i <= n; i++)
        res *= x;
    return res;
}

int main(void){
    float x;
    int n;
    printf("Insira dois valores, a base e o expoente, respectivamente: "); scanf("%f%d", &x, &n);
    printf("%.f ^ %d = %.f", x, n, pot(x, n));
}