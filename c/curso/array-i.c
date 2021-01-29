#include <stdio.h>
//funcao principal:
int main(void){
    int matriz[10]; //declara array do tipo int com 10 elementos
    //atribuicao de valores aos elementos do array:
    for(int i = 0; i < 10; i++){
        matriz[i] = 0; //define elemento no local i
    }
    printf("%s%13s\n", "Elemento:", "Valor:");
    //saida dos elementos do array formatados:
    for(int i = 0; i < 10; i++){
        printf("%7d%13d\n", i, matriz[i]);
    }
    return 0;
}