#include <stdio.h>
//funcao principal:
int main(void){
    //definicao de uma matriz com numero de elementos pre-definidos
    int matriz[10] = {1, 23 , 5, 65, 7, 76, 56, 32, 87, 90};
    //definicao de uma matriz com numero de elementos nao pre-definidos
    int array[] = {0, 2, 4, 6, 8};
    printf("%s%13s\n", "Elemento:", "Valor:");
    for(int i = 0; i < 10; i++){
        printf("%7d%13d\n", i, matriz[i]);

    }
    return 0;
}