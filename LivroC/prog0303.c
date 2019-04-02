#include <stdio.h>

int main(){
    int x;
    printf("Insira um inteiro: "); scanf("%d", &x);
    if(x) //ou: if(x != 0)
        printf("%d nn e zero",x);
    else
        printf("%d e zero",x);
}