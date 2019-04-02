#include <stdio.h>

void linha(); //Esta linha diz ao programa que a função 'linha' existe, assim, podendo cria-la no rodapé

int main(void){
    linha();
    printf("Hello World\n");
    linha();
}

void linha(){
    for(int i = 0; i <= 20; i++)
        putchar('*');
    putchar('\n');
}