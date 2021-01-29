#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){
    int tabuada = 0;
    printf("Digite a tabuada que deseja: \n");
    scanf("%i", &tabuada);
    for(int x = 0; x <= 10; x++){
        printf("%i x %i = %i\n", x, tabuada, x * tabuada);
    }
    system("pause");
    return 0;
}