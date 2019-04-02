#include <stdio.h>

int main(void){
    int a;
    printf("Insira um ano: "); scanf("%d", &a);
    if((a%4 == 0 && a%100 != 0) || a%400 == 0)
        printf("O ano %d e bissexto", a);
    else
        printf("O ano %d nn e bissexto", a);
}