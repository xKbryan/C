#include <stdio.h>

int main(void){
    float t, q, g;
    printf("Insira a quantidade de toneladas: "); scanf("%f",&t);
    q = t * 1000;
    g = q * 1000;
    printf("%.4f Toneladas contem %.4f Quilogramas \n%.4f Toneladas contem %.4f Gramas", t, q, t, g);
}
