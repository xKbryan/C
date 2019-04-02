#include <stdio.h>

//Identifica se o char é letra ou não

int xIsDigit(char c){
    return (c >= '0' && c <= '9');
}

int main(void){
    char c;
    printf("Insira um valor: "); scanf(" %c", &c);
    while(1){
        c = getchar();
        if(! xIsDigit(c))
            putchar(c);
    }
}