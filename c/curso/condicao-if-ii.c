#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    int numero;
    //obs: ! eh o sinal de negacao, equivalente ao NOT.
    printf("Digite um numero par: \n");
    scanf("%i", &numero);
    //inicio da condicao:
    //fucao checa se numero eh par, dividindo-o por 2, obtendo o resto da divisao:
    if(numero%2 == 0){
        printf("Muito bem! O valor digitado %i eh um numero par!\n", numero);
    }
    else{
        printf("Desculpe! O numero digitado eh impar!\n");
    }
    // == (comparacao igual)
    // !=(comparacao diferente)
}