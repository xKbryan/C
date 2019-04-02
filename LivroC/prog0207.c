#include <stdio.h>

int main(void)
{
    float raio, perimetro;
    double pi = 3.1415927, area;
    printf("Insira o raio: "); scanf("%f", &raio);
    area = raio * raio * pi;
    perimetro = 2 * pi * raio;
    printf("Area = %f \nperimetro = %f", area, perimetro);
}
