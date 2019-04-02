#include <stdio.h>
//Converte letras minúculas em maiúsculas ; conversor
int xToupper(char c){
    if (c >= 'a' && c <= 'z')
        return (c + 'A' - 'a');
    else
        return c;
}

int main(void){
    char c;
    while(1){
        c = getchar();
        putchar(xToupper(c));
    }
}