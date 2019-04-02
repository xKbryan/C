#include <stdio.h>

int linha3x(){
    for(int i = 1; i <= 3; i++)
        putchar('*');
    putchar('\n');
}

int linha5x(){
    for(int i = 1; i <= 5; i++)
        putchar('*');
    putchar('\n');
}

int linha7x(){
    for(int i = 1; i <= 7; i++)
        putchar('*');
    putchar('\n');
}

int main(void){
    linha3x();
    linha5x();
    linha7x();
    linha5x();
    linha3x();
}