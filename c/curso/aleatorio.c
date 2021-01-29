#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(void){
    int i;
    for(i = 1; i <= 20; i++){
        //funcao rand() da diretiva de pre-processamento stdlib.h
        //escolhe um valor aleatoriamente no intervalo de 0 a 32767
        //por padrao. % 6 indica que o intervalo foi reduzido de 0 a 6
        printf("%10d", 1 + (rand() % 6));
        if(i % 5 == 0){
            printf("\n");
        }
    }
    system("pause");
    return 0;
}