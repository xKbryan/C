#include <stdio.h>

//Sinceramente, esse código não faz sentido...

int main(void){
    int n;
    printf("[ 9] A \n[10] B \n[11] C \n");
    printf("Insira um valor do menu acima: "); scanf ("%d",&n);
    switch(n){
        case 9 : printf("O numero e 9\n"); break;
        case 10 : printf("O numero e 10\n"); break;
        case 11 : printf("O numero e 11\n"); break;
        default : printf("O numero nao esta entre 9 e 11 >_<\n");
    }
}
