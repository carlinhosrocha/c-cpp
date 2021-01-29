#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){
    int i = 0;
    //looping for: (usado quando sabemos o numero de itens a percorrer):
    printf("Digite o ate que numero devo contar: \n");
    scanf("%i", &i);
    for(int x = 0; x <= i; ++x){
        printf("Valor: %i.\n", x);
    }
    system("pause");
    return 0;
}