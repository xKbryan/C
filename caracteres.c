#include <stdio.h>

//Acesso ao caminho
//gcc <nome_arquivo.c> -o <nome_compilado.exe>
//<nome_compilado>

int main(void){
    printf("Pula linha: \n");
    getchar();
    printf("Sinal Sonoro \7 \a \n");
    getchar();
    printf("Backspace \b \n");
    getchar();
    printf("Carriage Return \r \n");
    getchar();
    printf("Tabulação Horizontal \t \n");
    getchar();
    printf("Tabulação Vertical \v \n");
    getchar();
    printf(" %% \n");
}