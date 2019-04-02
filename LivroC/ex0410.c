#include <stdio.h>

int main(void){
    int n;
    do{
        printf("Insira um valor: "); scanf("%d", &n);
        printf("%d\n", n);
    } while (!(n > 0 && n <= 100));
}
