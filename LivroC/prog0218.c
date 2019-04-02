#include <stdio.h>

int main (){
    long int n_segundos;
    printf("Insira o numero em segundos: "); scanf("%ld", &n_segundos);
    printf("Horas   \t: %d\n",(int) n_segundos/3600);
    printf("Minutos \t: %d\n",(int) (n_segundos%3600/60));
    printf("Segundos \t: %d\n",(int) n_segundos%60);
}