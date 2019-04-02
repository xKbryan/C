#include <stdio.h>

int main(void){
    char op[12];
    do{
        printf("Tela inicial: \nClientes\nFornecedores\nEncomendas\nSair\n"); gets(op);
        fflush(stdin); //Limpa o buffer do teclado
        switch (*op){
            case 'c' : case 'C' : puts("Opcao 'Clientes' selecionada\n"); break;
            case 'f' : case 'F' : puts("Opcao 'Fornecedores' selecionada\n"); break;
            case 'e' : case 'E' : puts("Opcao 'Encomendas' selecionada\n"); break;
            case 's' : case 'S' : puts("Opcao 'Sair' selecionada\n"); break;
            default : puts("Opcao invalida\n"); break;
        }
        getchar();
    } while (*op != 's' && op != "sair" && *op != 'S');
}