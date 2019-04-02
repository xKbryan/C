#include <stdio.h>

int main(void){
    for(int i = 1; i <= 100; i++)
        if(i==60)
            break;
        else if(i%2==1)
            continue;
        else
            printf("%2d\n", 2*i);
    printf("Fim do laco");
}