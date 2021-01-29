#include <stdio.h>
//variaveis de armazenamento estatico:
extern pi = 3.1415923583; //variavel com acesso global
static cont = 1; //variavel que apos inicializada retem o valor
//funcao principal:
int main(void){
    //variaveis de duracao de armazenamento automatica:
    auto double x = 0; //variavel com destruicao automatica
    register int i = 1;   //variavel que ficara salva no registrador
    return 0;
}