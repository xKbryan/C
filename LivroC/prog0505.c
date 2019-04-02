#include <stdio.h>

int linha(int n){
    for(int i = 1; i <= n; i++)
        putchar('*');
    putchar('\n');
}

int main(void){
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);
}