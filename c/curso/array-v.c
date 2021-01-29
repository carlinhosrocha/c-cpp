#include <stdio.h>
//diretivas pre-processadores:
#define RESPONSE 40 //40 notas de 1 a 10
#define FREQUENCY 11 // 10 espacos para armazenar a frequencia de resposta
//funcao principal:
int main(void){
    int notas[RESPONSE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
    int frequencia[FREQUENCY] = {0};
    //loop para analisar cada resposta e armazena-la corretamente:
    for(int i = 0; i < RESPONSE; i++){
        ++frequencia[notas[i]]; //atribui mais 1 na posicao da frequencia;
    }
    //exxibindo resultado de forma tabular:
    printf("%s%13s\n", "NOTA", "FREQUENCIA");
    for(int c = 1; c < FREQUENCY; c++){
        printf("%7d%13d\n", c, frequencia[c]);
    }
    return 0;
}
