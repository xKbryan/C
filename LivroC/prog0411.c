#include <stdio.h>

int main(void){
    for(int i = 1; i <= 100; i++)
        if(i==30)
            break;
        else
            printf("%2d\n", 2*i);
    printf("Fim do laco");
}