#include <stdio.h>

int main(void){
    int d, m, a;
    char val;
    printf("Insira dia, mes e ano, respectivamente: "); scanf("%d%d%d", &d, &m, &a);
    switch (m){
        case 4 : case 6 : case 9 : case 11 : val = (d <= 30 && d > 0 ? 'v' : 'f'); break;
        case 2 : if(d <= 29 && d > 0 && ((a%4 == 0 && a%100 != 0) || (a%400 == 0))) val = 'v'; else if(d <= 28 && a%4 != 0) val = 'v'; else val = 'f'; break;
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : val = (d <= 31 && d > 0 ? 'v' : 'f'); break;
        default : val = 'f'; break;
    }
    if(val == 'v' && a >= 0)
        printf("Data valida: %d/%d/%d", d, m, a);
    else
        printf("Data invalida: %d/%d/%d", d, m, a);
}