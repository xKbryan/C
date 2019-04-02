#include <stdio.h>

int main(void){
    int m, d;
    printf("Insira um mes: "); scanf("%d", &m);
    d = 32;
    switch (m){
        case 2 : d = d - 2;
        case 4 : case 6 : case 9 : case 11 : d = d - 1;
        default : d = d - 1;
    }
    printf("O mes %d tem %d dias", m, d);
}