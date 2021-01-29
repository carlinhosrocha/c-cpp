#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//funcao principal:
int main(){
    int numUm, numDois, res;
    char caractere;
    printf("Digite o primeiro numero: \n");
    scanf("%i", &numUm);
    printf("Digite o segundo numero: \n");
    scanf("%i", &numDois);
    printf("===============================\n");
    printf("= [A] somar os numeros        =\n");
    printf("= [B] multiplicar os numeros  =\n");
    printf("= [C] dividir os numeros      =\n");
    printf("===============================\n");
    printf("Digite qual opcao deseja: \n");
    //intrucao que armazena caractere digitado
    //diretamente na variavel:
    caractere = getchar();
    if(caractere == 'a'){
        res = numUm + numDois;
        printf("A soma entre os numeros eh: %i.\n", res);
    }else{
        if(caractere == 'b'){
            res = numUm * numDois;
            printf("A multiplicacao entre os numeros eh: %i.\n", res);
        }else{
            if(caractere == 'c'){
                res = numUm / numDois;
                printf("A divisao do primeiro pelo segundo numero eh: %i.\n", res);
            }else{
                printf("Desculpe, opcao invalida! :(\n");
            }
        }
    }
    return 0;
}