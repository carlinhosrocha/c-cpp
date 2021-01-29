#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    // % -> resto da divisao
    printf("--------------------------------\n");
    printf("Digite dois numeros inteiros: \n");
    int numerador, denominador, resto;
    //obs: & sempre deve preceder a variavel declarada na funcao scanf.
    scanf("%i %i", &numerador, &denominador);
    resto = numerador % denominador;
    printf("--------------------------------\n");
    printf("O resto da divisao de %i por %i eh: %i\n", numerador, denominador, resto);
    printf("--------------------------------\n");
    return 0;
}