#include <stdio.h>

int a(void){
    char c;
    printf("Insira um caractere de seu teclado: "); scanf(" %c", &c);
    printf("%c --> %d", c, c);
}

int b(void){
    int c;
    printf("Insira um valor entre 0 e 255: "); scanf("%d", &c);
    printf("%d --> %c", c, c);
}

int c(void){
    for(int i = 33; i <= 255; i++){
        printf("%3d --> %c\n", i, i);
        if(i%20 == 0){
            puts("Paradinha pra poder ler a tebela, hehe. De um enter para continuar...");
            getchar();
        }
    }
}

int main(void){
    char op;
    printf("Insira um exercicio: A, B, C ou qualquer valor para executar todos: "); scanf(" %c", &op);
    switch (op){
        case 'a' : case 'A' : puts("\nA: "); a(); break;
        case 'b' : case 'B' : puts("\nB: "); b(); break;
        case 'c' : case 'C' : puts("\nC: "); c(); break;
        default: puts("Executando todos \nA: ");a(); puts("\nB: ");b(); puts("\nC: "); c(); break;
    }
}