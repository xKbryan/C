#include <stdio.h>

int main(void){
    char sn[3];
    printf("Sim ou nao?: "); gets(sn);
    if (*sn == 's' || *sn == 'S') //Prefixo '*' é necessario para ser usado em verificação
        puts("si si");
    else 
        puts("no no");
    puts(sn);
}