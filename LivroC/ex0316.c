#include <stdio.h>

int main(void){
    int n;
    printf("Insira um inteiro: "); scanf("%d", &n);

    printf("Forma 1: ");
    if(n == 0)
        printf("%d e igual a zero\n", n);
    else
        printf("%d nn e igual a zero\n", n);

    printf("Forma 2: ");
    if(n)
        printf("%d nn e igual a zero\n", n);
    else
        printf("%d e igual a zero\n", n);
    
    printf("Forma 3: ");
    (n==0) ? printf("%d e igual a zero\n", n) : printf("%d nn e igual a zero\n", n);

    printf("Forma 4: ");
    switch (n)
    {
        case 0 : printf("%d e igual a zero", n); break;
        default : printf("%d nn e igual a zero", n); break;
    }
}