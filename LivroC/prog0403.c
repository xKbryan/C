#include <stdio.h>

int main(void){
    int i = 1;
    while(i <= 10){
        printf("5 x %2.d = %2.d\n", i, i*5); //'%2.d' para ficar identado e bonitinho, como uma tabuada seria
        i++;
    }
}