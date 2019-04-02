#include <stdio.h>

void linha(int n, char c){
    for(int i = 1; i <= n; i++)
        putchar(c);
    putchar('\n');
}

int main(void){
    linha(3, '+');
    linha(5, '-');
    linha(7, '*');
    linha(5, '-');
    linha(3, '+');
}