#include <stdio.h>
//funcao principal:
int main(void){
    char letra;
    printf("Digite o caractere: ");
    scanf("%c", &letra);
    printf("O caractere (%c) tem o valor %d.", letra, letra);
    return 0;
}