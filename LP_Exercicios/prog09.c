#include <stdio.h>

int main(void){
    char op[12];
    puts("Menu de opcoes (digite o numero ou o nome): \n[1]\t Clientes \n[2]\t Fornecedores \n[3]\t Saldo \n[0]\t Voltar"); gets(op);
    switch (*op){
        case '1' : case 'c' : case 'C' : printf("Voce selecionou: Clientes") ; break;
        case '2' : case 'f' : case 'F' : printf("Voce selecionou: Fornecedores") ; break;
        case '3' : case 's' : case 'S' : printf("Voce selecionou: Saldo") ; break;
        default : printf("Voce voltou"); break;
    }
}