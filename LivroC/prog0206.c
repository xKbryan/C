#include <stdio.h>

int main(void)
{
    short int idade;
    int montante;
    long int n_conta;
    printf("Idade: "); scanf("%hd", &idade);
    printf("Montante: "); scanf("%d", &montante);
    printf("Numero da conta: "); scanf("%ld", &n_conta);
    printf("Uma pessoa de %hd anos depositou $%d na conta: %ld", idade, montante, n_conta);
}
