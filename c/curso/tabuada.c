//declaracao das bibliotecas:
#include <stdio.h>
#include <stdlib.h>
//inicio da funcao principal:
int main(){
    //entrada do numero da tabuada:
    int tabu = 0;
    int i = 0;
    int multi = 0;
    printf("Digite qual tabuada deseja visualizar: \n");
    scanf("%i", &tabu);
    //inicio do laco de repeticao:
    while(i <= 10){
        multi = tabu * i;
        printf("%i X %i = %i\n", i, tabu, multi);
        i = i + 1;
    }
    return 0;
}