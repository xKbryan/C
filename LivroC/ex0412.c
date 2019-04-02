#include <stdio.h>

int main(void){
    int n1, n2, aux;
    printf("Insira dois numeros: "); scanf("%d%d", &n1, &n2);
    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    for (int i = n1; i <= n2; i++)
        printf("%3d --> %c\n", i, (char) i);
}