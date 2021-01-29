#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //bloco de intrucao: conjunto de codigo em um escopo restrito
    int x = 0;
    if(x < 20)
        if(x < 10)
            printf("X eh menor que 10\n");
    /*
        ==================
        if(true)
            instrucao();
        ==================
        for(true)
            instrucao();
        ==================
    */
    while(x < 5)
        printf("valor: %i\n", x++);
    system("pause");
    return 0;
}