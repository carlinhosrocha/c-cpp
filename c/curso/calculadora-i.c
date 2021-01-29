#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //declaracao local das variaveis:
    int numUm, numDois, soma, sub, multi, div;
    printf("-------------------------------------\n");
    printf("Digite dois numeros: \n");
    scanf("%i %i", &numUm, &numDois);
    //operacao soma e subtracao:
    soma = numUm + numDois;
    sub = numUm - numDois;
    multi = numUm * numDois;
    div = numUm / numDois;
    printf("-------------------------------------\n");
    printf("A soma entre %i e %i eh: %i.\n", numUm, numDois, soma);
    printf("A subtracao de %i por %i eh: %i.\n", numUm, numDois, sub);
    printf("A multiplicacao entre %i e %i eh: %i.\n", numUm, numDois, multi);
    printf("A divisao de %i por %i eh: %i.\n", numUm, numDois, div);
    printf("-------------------------------------\n");
}