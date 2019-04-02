#include <stdio.h>

int main(void){
    int h; float res; char tipo;
    printf("Insira um valor em horas: "); scanf("%d", &h);
    printf("Insira o tipo de saida (d, m, s, t): "); scanf(" %c", &tipo);
    switch (tipo)
    {
        case 'd': case 'D' : res = h / (float) 24; break;
        case 'm': case 'M' : res = h * 60L; break;
        case 's': case 'S' : res = h * 3600L; break;
        case 't': case 'T' : res = h * 36000L; break;
    }
    printf("%dh -> %.2f%c", h, res, tipo);
}