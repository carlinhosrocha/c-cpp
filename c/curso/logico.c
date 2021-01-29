#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    // && -> "e"
    int i = 40;
    int condicao = (i > 20) && (i < 100);
    if(condicao == 1){
        printf("A expressao eh VERDADEIRA!\n");
    }else{
        printf("A expressao eh FALSA!\n");
    }
    // || -> "ou"
    int a = 100;
    int cond = (a == 200) || (a == 40);
    if(cond == 1){
        printf("A expressao eh VERDADEIRA!\n");
    }else{
        printf("A expressao eh FALSA!\n");
    }
    return 0;
}