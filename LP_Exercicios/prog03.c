#include <stdio.h>

int main(void){
    int imp, par, n;
    imp = par = 0;
    for(int i = 1; i <= 10; i++){
        printf("[%2d] Insira um valor: ", i); scanf("%d", &n);
        if(n%2 == 0)
            par++;
        else
            imp++;
    }
    printf("Impares: %d \nPares: %d", imp, par);
}