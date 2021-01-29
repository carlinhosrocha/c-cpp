#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //operador ternario:
    //expressao? valorTrue : valorFalse;
    //<variavel> = (true) ? <valorUm> : <valorDois>;
    int x = 1;
    int y;
    //adiciona 2 a y se x for igual a 0; caso contrario y = 4;
    y = (x == 0) ? 2 : 4;
    printf("valor inicial de y: %i.\n", y);
    while(y <= 10){
        printf("valor: %i.\n", y);
        y++;
    }
    system("pause");
    return 0;
}
