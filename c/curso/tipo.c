#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //tipos de dados:
    /*
    i)  char
    ii) int
    iii)float
    iv) double
    v)  void
    */
    //modificadores de tipos:
    /*
    1) signed   -> + e -
    2) unsigned -> +
    3) long     -> expande a capacidade de armazenamento
    4) short    -> diminuir a capacidade de armazenamento
    */
    //declaracao de variaveis:
    unsigned short int numero;
    int i = 10;
    printf("A variavel INT ocupa %i bytes de memoria.\n", sizeof(i));
    printf("A variavel UNSIGNED SHORT INT ocupa %i bytes de memoria.\n", sizeof(numero));
    return 0;
}