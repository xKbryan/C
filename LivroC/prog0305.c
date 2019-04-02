#include <stdio.h>

int main(){
    int x,y,aux;
    printf("Insira dois inteiros: "); scanf("%d%d", &x,&y);
    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    printf("%d %d", x, y);
}