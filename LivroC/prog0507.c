#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;
}

int dobro(int x){
    return x * 2;
}

int main(void){
    int n1, n2, x;
    printf("Insira dois valores: "); scanf("%d%d", &n1, &n2);
    printf("%d + %d = %d \n%d * 2 = %d e %d * 2 = %d", n1, n2, soma(n1,n2), n1, dobro(n1), n2, dobro(n2));
}