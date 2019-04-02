#include <stdio.h>

int main(void){
    int ma = 0, me = 10000, n;
    float media;
    for(int i = 1; i <= 5; i++){
        printf("[%d] Insira um valor: ", i); scanf("%d", &n);
        ma = (n > ma ? n : ma);
        me = (n < me ? n : me);
        media += n;
    }
    media /= 5;
    printf("Maior: %d \nMenor: %d \nMedia: %.f", ma, me, media);
}