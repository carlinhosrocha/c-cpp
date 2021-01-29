#include <stdio.h>
#define SIZE 15 //diretiva pré-processador - constante simbólica 
//funcao principal:
int main(void){
    int matriz [SIZE]; //declaracao da matriz
    int c; //contador
    for(c = 0; c < SIZE; c++){
        matriz[c] = 2 + 2 * c; //atribui valores multiplos de 2 à matriz
    }
    printf("%s%13s\n", "Elemento:", "Valor:");
    for(int i = 0; i < SIZE; i++){
        //exibe os valores de matriz em formato tabular
        printf("%7d%13d\n", i, matriz[i]); 
    }
    int soma = 0;
    //loop para a soma dos elementos do array:
    for(int x = 0; x < SIZE; x++){
        soma = soma + matriz[x];
    }
    //exibe valor da soma:
    printf("O valor da soma dos %d elementos da matriz eh: %d.", SIZE, soma);
    return 0;
}