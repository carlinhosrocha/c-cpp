#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//funcao principal:
int main(void){
    //variavel semente:
    unsigned seed;
    //printf("Digite a semente: ");
    //scanf("%u", &seed);
    //=================================================================
    srand(time(NULL)); //inicia gerador de valores aleatorios
    //por meio da leitura do clock do computador (1° de jan de 1970);
    for(int i = 1; i < 10; i++){
        printf("%10i", 1 + (rand() % 6));
        if(i % 5 == 0){
            printf("\n");
        }
    }
    //system("pause");
    return 0;
}