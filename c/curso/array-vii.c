#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
//funcao principal:
int main(void){
    int num[SIZE] = {0}; //array que armazena valores de frequencia
    srand(time(NULL)); //semente do gerador de valores aleatorios
    //joga dados 6000 vezes:
    for(int c = 0; c < 6000; c++){
        int dado = 1 + rand() % 6;
        ++num[dado]; //armazena na posicao correspondente a frequencia do dado
    }
    //exibicao dos valores jogados:
    printf("%s%13s\n", "FACE:", "FREQUENCIA:");
    for(int i = 1; i < SIZE; i++){
        printf("%d%13d\n", i, num[i]);
    }
    return 0;
}