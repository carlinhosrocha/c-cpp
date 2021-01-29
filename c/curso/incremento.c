#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){
    int x, i = 0;
    printf("Digite ate que numero devo contar: \n");
    scanf("%i", &x);
    do{
        //pre-incremento:
        ++i;
        printf("Valor: %i\n", i);
    }while(i < x);
    //pos-incremento -> x++
    //pre-decremento -> --x
    //pos-decremento -> x--
    system("pause");
    return 0;
}