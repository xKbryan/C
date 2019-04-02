#include <stdio.h>

int main(void){
    int h; float res; char tipo;
    printf("Insira um valor em horas: "); scanf("%d", &h);
    printf("Insira o tipo de saida (m, s, t): "); scanf(" %c", &tipo);
    res = h;
    switch (tipo)
    {
        case 't': case 'T' : res = res * 10;
        case 's': case 'S' : res = res * 60L;
        case 'm': case 'M' : res = res * 60L;
    }
    printf("%dh -> %.f%c", h, res, tipo);
}