#include <stdio.h>

int main(void){
    int h;
    long s;
    printf("Insira um valor em horas: "); scanf("%d", &h);
    s = (h < 0 ? 0 : h * 3600L); //Sufixo 'L' só é usado em constantes. Variáveis necessitam de casting '(long)'
    printf("%d hora(s) tem %ld segundos", h, s);
}