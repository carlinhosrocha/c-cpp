#include <stdio.h>
#define SIZE 10 //diretiva para tamanho do array
//funcao principal:
int main(void){
    int num[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 }; //array com valores
    //exibindo os elementos do array:
    printf("%s%13s%17s\n", "ELEMENTO:", "VALOR:", "HISTOGRAMA:");
    for(int c = 0; c < SIZE; c++){
        printf("\n%7d%13d", c, num[c]);
        printf("%10s", "");
        for(int x = 0; x < num[c]; x++){
            printf("%s", "*");
        }
    }
    return 0;
}