#include <stdio.h>

int main(void){
    int n, total = 0;
    printf("Insira a razao: "); scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        total = total + n;
    }
    printf("PA de %d ate %d = %d", n, n+10, total);
}