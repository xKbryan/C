#include <stdio.h>

int main(void){
    int m;
    printf("Insira um mes: "); scanf("%d", &m);
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        printf("O mes %d tem 31 dias", m);
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        printf("O mes %d tem 30 dias", m);
    else if (m == 2)
        printf("o mes %d tem 28 dias", m);
    else 
        printf("mes invalido");
}