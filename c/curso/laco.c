#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//funcao principal:
int main(){
    int contador = 0;
    char choose = '1';
    do{
        contador += 1;
        printf("%i\n Digite 0 para finalizar! Caso contrario clique enter..\n", contador);
        choose = getchar();
    }while(choose != '0');
    return 0;
}