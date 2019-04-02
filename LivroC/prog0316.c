#include <stdio.h>

int main(void){
    float n1, n2, total = 0;
    char op;
    printf("Digite o 1o valor: "); scanf("%f", &n1); 
    printf("Insira o operador: %.f ", n1); scanf(" %c", &op); 
    printf("Insira o 2o valor: %.f %c ", n1, op); scanf("%f", &n2);
    switch (op)
    {
        case '+' : total = n1 + n2; break;
        case '-' : total = n1 - n2; break;
        case '*' : case 'x' : case 'X' : total = n1 * n2; break;
        case '/' : case '\\' : case ':' : total = n1 / n2; break;
    }
    printf("%.f %c %.f = %.f", n1, op, n2, total);
}