#include <stdio.h>
//biblioteca padrao com metodos para controlar processos, alocar memoria, etc.
#include <stdlib.h>
//funcao principal:
int main(){
    //----------------------------------------------------------------------------
    //trabalhando a matematica:
    int numUm, numDois;
    numUm = 15;
    numDois = 20;
    //soma das variaveis:
    int soma = numUm + numDois;
    //subtração das variaveis:
    int sub = numDois - numUm;
    //multiplicacao das variaveis:
    int multi = numUm * numDois;
    //divisao das variaveis:
    int div = numUm / 3;
    //----------------------------------------------------------------------------
    printf("A soma entre %i e %i eh igual a: %i.\n", numUm, numDois, soma);
    printf("A subtracao entre %i e %i eh igual a: %i.\n", numDois, numUm, sub);
    printf("A multiplicacao entre %i e %i eh igual a: %i.\n", numUm, numDois, multi);
    printf("A divisao de %i por 3 eh igual a: %i\n.", numUm, div);
    return 0;
}