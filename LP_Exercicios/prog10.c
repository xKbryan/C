#include <stdio.h>

int main(void){
    int op;
    do{
        puts("\tDigite um numero correspondente a fruta:");
        puts("\t[1] Mamao");
        puts("\t[2] Abacaxi");
        puts("\t[3] Laranja");
        scanf("%d", &op);
    } while (op < 1 || op > 3);

    switch (op){
        case 1 : printf("\tVoce selecionou Mamao"); break;
        case 2 : printf("\tVoce selecionou Abacaxi"); break;
        case 3 : printf("\tVoce selecionou Laranja"); break;
    }
}