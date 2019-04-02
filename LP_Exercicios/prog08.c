#include <stdio.h>

void acConversor(unsigned int x){
    int tamanho = 8 * (sizeof(int));
    unsigned int mask = 1;
    for(int i = tamanho - 1; i >= 0; i--)
        (x & (mask<<i)) ? printf("1") : printf("0");
    putchar('\n');
}

int a(void){
    unsigned int x;
    do{
        printf("Digite um inteiro sem sinal menor que 4294967296 ou 0 para sair: "); scanf("%d", &x); 
        if(x >= 4294967296)
            printf("O numero excedeu o limite...\n");
        else{
            printf("Convertido para binario: ");
            acConversor
            (x);
        }
    } while (x != 0);
}

int b(void){
    puts("Tamanho dos tipos de variaveis: ");
    //printf("Bool: \t%d bytes \n", sizeof(bool));
    printf("Char: \t\t%d bytes \n", sizeof(char));
    printf("Short Int: \t%d bytes \n", sizeof(short int));
    printf("Int: \t\t%d bytes \n", sizeof(int));
    printf("Long Int: \t%d bytes \n", sizeof(long int));
    printf("Float: \t\t%d bytes \n", sizeof(float));
    printf("Double: \t%d bytes \n", sizeof(double));
    printf("Long Double: \t%d bytes \n", sizeof(long double));
}

unsigned int n1, uinteger;

void cRead(){
    printf("\nDigite 0 para sair ou um int positivo menor que 4294967296: ");
    scanf("%d",&n1);
    if ( n1 >= 4294967296 ){
      printf("O numero inserido excedeu o limite...\n");
      cRead();
    }
    else
      uinteger = (unsigned int)n1;
}

void cProc(){
  printf("           \n * * * Exemplos de operacoes com bits * * * \n");
  printf("O numero dado e:          %d\n",uinteger); 
  printf("Aqui estao os seus bits:  ");  acConversor(uinteger);
  unsigned int a=uinteger; // O operator "~" e destrutivo!
  printf("O operator ~:             ");  acConversor(~a);
  a=uinteger; printf("<<1 Shift Left one:       ");  acConversor(a<<1);
  a=uinteger; printf("<<2 Shift Left two:       ");  acConversor(a<<2);
  a=uinteger; printf(">>1 Shift Right one:      ");  acConversor(a>>1);
  a=uinteger; printf(">>2 Shift Right two:      ");  acConversor(a>>2);
  unsigned int mask=0xaaaaaaaa; a=uinteger;
  printf("O numero dado:            "); acConversor(a);
  printf("Uma dada mascara de bits: "); acConversor(mask);
  printf("Com o operador & AND:     "); acConversor(a&mask);
  printf("Com o operador |  OR:     "); acConversor(a|mask);
  printf("Com o operador ^ XOR:     "); acConversor(a^mask);
}

int c(){
    cRead();
    while (uinteger != 0){
        cProc();
        cRead();
    }
}

int main(void){
    char op;
    printf("Insira um exercicio: A, B, C ou qualquer valor para executar todos: "); scanf(" %c", &op);
    switch (op){
        case 'a' : case 'A' : puts("\nA: "); a(); break;
        case 'b' : case 'B' : puts("\nB: "); b(); break;
        case 'c' : case 'C' : puts("\nC: "); c(); break;
        default: puts("Executando todos \nA: ");a(); puts("\nB: ");b(); puts("\nC: "); c(); break;
    }   
}