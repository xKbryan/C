#include <stdio.h>

int main(void){
    int i , j;
    i = j = 2;
    printf("Antes: i = %d ; j = %d\n", i, j);
    printf("Aplicando: i++ = %d ; ++j = %d\n", i++, ++j);
    printf("Depois: i = %d ; j = %d\n", i, j);
}