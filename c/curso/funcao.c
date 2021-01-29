#include <stdio.h>
//declaracao da funcao square:
int quadrado(int y){
    int z;
    z = y * y;
    return z;
}
//funcao principal:
int main(void){
    //laco for:
    for(int x = 0; x < 10; x++){
        printf("%d\n", quadrado(x));
    }
    return 0;
}