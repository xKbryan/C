#include <stdio.h>

int main (){
    char ch;
    printf("Insira um caractere: "); scanf("%c", &ch);
    printf("O caractere '%c' tem o ASCII nº %d\n", ch, ch);
}