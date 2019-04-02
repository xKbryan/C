#include <stdio.h>

int main(void){
    int n;
    printf("Insira um valor: "); scanf("%d", &n);
    for(int i = n ; ; i++){
        if(i%10 == 0)
            break;
        else if(i%3 == 0)
            continue;
        printf("%d\n", i);
    }
}