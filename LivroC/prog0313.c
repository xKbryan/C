#include <stdio.h>

int main(void){
    char estCivil;
    printf("Insira um estado civil (C, S, D, V): "); scanf("%c", &estCivil);
    switch (estCivil)
    {
        case 'c' : case 'C': printf("Casado"); break;
        case 's' : case 'S': printf("Solteiro"); break;
        case 'd' : case 'D': printf("Divorciado"); break;
        case 'v' : case 'V': printf("Viuvo"); break;
        default: printf("Estado civil invalido");
    }
}