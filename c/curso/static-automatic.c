#include <stdio.h>
//prototipos de funcao:
void estatico(void);
void automatico(void);
//funcao principal:
int main(void){
    //primeira chamada
    printf("\nPrimeira chamada para cada funcao:\n");
    estatico();  //chamada da funcao
    automatico(); //chamada da funcao
    //segunda chamada
    printf("\nSegunda chamada para cada funcao:\n");
    estatico(); //chamada da funcao
    automatico(); //chamada da funcao
    return 0; //indica a execucao bem sucedida
}
//funcao que demonstra o array estatico
void estatico(void){
    static int arrayOne[3]; //cria um array estatico com tres elementos
    int i; //contador
    //valores na entrada
    printf("\nValores na entrada da funcao estatico():\n");
    for(i = 0; i <= 2; i++){
        printf("arrayOne[%d] = %d | ", i, arrayOne[i]); //valores carregados inicialmente
    }
    //valores de saida
    printf("\nValores na saida da funcao estatico():\n");
    for(i = 0; i <= 2; i++){
        printf("arrayOne[%d] = %d | ", i, arrayOne[i] += 5); //atribui valor 5 ao array
    }
}
//funcao que demonstra um array automatico
void automatico(void){
    int arrayTwo[3] = {1, 2, 3}; //array com tres elementos
    int i; //contador
    printf("\nValores na entrada da funcao automatico():\n");
    //valores na entrada
    for(i = 0; i <= 2; i++){
        printf("arrayTwo[%d] = %d | ", i, arrayTwo[i]); //exibe elementos do array
    }
    //valores de saida
    printf("\nValores de saida da funcao automatico():\n");
    for(i = 0; i <= 2; i++){
        printf("arrayTwo[%d] = %d | ", i, arrayTwo[i] += 5); //soma cinco as elementos iniciais
    } 
}