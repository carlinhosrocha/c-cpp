#include <stdio.h>
//função principal:
int main(){
    //formatação da variával:
    //printf("%tipo-um %tipo-dois %tipo-tres", var-um, var-dois, var-tres);
    int dia = 10;
    int mes = 4;
    int ano = 2020;
    float pi = 3.141526;
    float calculado = 38.543;
    //função de saída de dados:
    printf("O valor de PI eh: %f", pi);
    printf("O valor calculado eh: %f", calculado);
    printf("%i / %i / %i", dia, mes, ano);
    /*
    %i ou %d -> integer
    %f -> float/double
    %c -> char
    %s -> string
    %u -> módulo do número
    %p -> endereço de memória
    %e ou %E -> notação científica
    %% -> sinal de porcentagem
    */
   return 0;
}