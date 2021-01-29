#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){
    char i;
    do{
        printf("Digite qualquer tecla [ou 0 para sair]: \n");
        //instrucao que ler caractere e armazena na variavel instanteneamente:
        i = getche();
        printf("\nVoce digitou a teclha: %c.\n", i);
    }while(i != '0');
    return 0;
}