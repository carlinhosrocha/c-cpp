#include <stdio.h>
//funcao principal:
int main(void){
    //array sendo inicializado com 10 elementos:
    int matriz[10] = {0}; //o primeiro elemento recebe o valor zero
    //visto que o restante dos elementos nao foram inicializados, logo receberao zero
    printf("%s%13s\n", "Elemento:", "Valor:");
    for(int i = 0; i < 10; i++){
        printf("%7d%13d\n", i, matriz[i]);
    }
    return 0;
}