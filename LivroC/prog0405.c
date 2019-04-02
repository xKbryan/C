#include <stdio.h>

int main(void){
    int i = 1, n = 1;
    while(n <= 5){
        while(i <= 10){
            printf("%2.d x %2.d = %2.d\n", n, i, n*i); //'%2.d' para ficar identado e bonitinho, como uma tabuada seria
            i++;
        }
        putchar('\n');
        n++;
        i = 1;
    }
}