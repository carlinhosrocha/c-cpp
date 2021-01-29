#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    printf("Digite um valor entre 0 e 9: \n");
    int i;
    scanf("%i", &i);
    //instrucao switch (semelhante a 'if' aninhados):
    switch(i){
        //switch (variavel)
        //case valor:
        case 0:
            printf("Voce digitou zero!\n");
        break;
        case 1:
            printf("Voce digitou um!\n");
        break;
        case 2:
            printf("Voce digitou dois!\n");
        break;
        case 3:
            printf("Voce digitou tres!\n");
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            printf("Voce digitou um valor maior que 3.\n");
            break;
        default:
            printf("Voce digitou nove!\n");
    }
    return 0;
}