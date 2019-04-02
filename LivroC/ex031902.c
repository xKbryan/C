#include <stdio.h>

int main(void){
    int m;
    printf("Insira um mes: "); scanf("%d", &m);
    switch (m){
        case 4 : case 6 : case 9 : case 11 : printf("o mes %d tem 30 dias", m); break;
        case 2 : printf("o mes %d tem 28 dias", m); break;
        default : printf("o mes %d tem 31 dias", m);
    }
}