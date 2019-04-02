#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Programa que calcula o preço de um software ; calcula software preço
int linha(void){
    for(int i = 1; i <= 100;i++)
        putchar('*');
    putchar('\n');
}

int main(){
    //Declaração de variáveis
    char cc[50], ss[50], aa[50];
    int lc, nt, pf;
    float c, s, a, custoB, custoI;

    //Entrada de dados
    linha();
    printf("Insira a Complexidade (Simples, Medio, Complexo): "); gets(cc);
    printf("Insira o Coeficiente (Facil compreensao, Conhecimento anterior, Inedito): "); gets(ss);
    printf("Obteve ajuda externa?: "); gets(aa);
    printf("Insira a quantidade de Linhas de Codigo: "); scanf("%d", &lc);
    printf("Insira o Numero de Telas: "); scanf("%d", &nt);
    printf("Insira a quantidade de Pontos de Funcao: "); scanf("%d", &pf);
    linha();
    
    //Processamento de dados
    switch (*cc){
        case 's' : case 'S' : c = 2.4; break;
        case 'm' : case 'M' : c = 2.6; break;
        case 'c' : case 'C' : c = 3.0; break;
        default : c = 0; break;
    }
    switch (*ss){
        case 'f' : case 'F' : s = 1.02; break;
        case 'c' : case 'C' : s = 1.03; break;
        case 'i' : case 'I' : s = 1.1; break;
        default : s = 0; break;
    }
    switch (*aa){
        case 's' : case 'S' : a = 1.5; break;
        case 'n' : case 'N' : a = 1.0; break;
        default : a = 0; break;
    }

    custoB = (c * pow(lc, s)) + (a * pow(nt, c));
    custoI = (c * pow(lc, s)) + (a * pf * nt);

    //Saída
    printf("Custo Basico: R$%.2f \nCusto Intermediario: R$%.2f", custoB, custoI);
    putchar('\n');
    linha();
}