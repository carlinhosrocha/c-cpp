#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //funcao para ler dados digitados no teclado:
    //scanf("tipo-de-entrada", &variavel-de-armazenamento);
    int numUm, numDois;
    printf("Por favor, digite dois valores: \n");
    //amarmazenando o valor digitado nas respectivas variaveis:
    scanf("%i %i", &numUm, &numDois);
    //exibindo o valor contido nas variaveis:
    printf("Voce digitou %i e %i, correto?\n", numUm, numDois);
    return 0;
}