#include <stdio.h>
#include <stdlib.h>
//biblioteca para manipulacao de caracteres:
#include <ctype.h>
//funcao principal:
int main(){
    char c;
    printf("Digite um caracter em letra minuscula: \n");
    scanf("%c", &c);
    //condicao 'se':
    if(c >= 'a'){
        printf("Segue a letra que voce digitou em maiuscula: %c\n", toupper(c));
    }
    return 0;
}