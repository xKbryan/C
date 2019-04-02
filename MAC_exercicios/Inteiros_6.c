#include <stdio.h>

int main(void)
{
    int n, nota, maior = 0, menor = 101;
    printf("Quantidade de alunos: "); scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("Digite a nota do %do aluno: ", i); scanf("%d", &nota);
        if (nota < menor)
            menor = nota;
        else if (nota > maior)
            maior = nota;
    }
    printf("Maior nota: %d \nMenor nota: %d", maior, menor);
    return 0;
}