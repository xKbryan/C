#include <stdio.h>

int main(void){
    for(int i = 0; i <= 255; i++){
        printf("%3d --> %c\n", i, (char) i);
        if(i%20 == 0){
            getchar();
        }
    }
}