#include <stdio.h>

int main(void){
    int n;
    printf("Insira um inteiro: "); scanf("%d", &n);
    switch (n)
    {
        case 0 : printf("%d e igual a zero", n); break;
        default : printf("%d nn e igual a zero", n); break;
    }
}