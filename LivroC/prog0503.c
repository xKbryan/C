#include <stdio.h>

int linha(){
    for(int i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
}

int main(void){
    linha();
    puts("Numeros entre 1 e 5");
    linha();
    for(int i = 1; i <= 5; i++)
        printf("%d\n", i);
    linha();
}