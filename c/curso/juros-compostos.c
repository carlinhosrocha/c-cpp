#include <stdio.h>
#include <math.h>
/*inicia funcao principa:*/
int main(void){
    /*declaracal de variaveis:*/
    double valor;
    double principal = 1000;
    double taxa = 0.05;
    /*calcula valor para cada um dos 10 anos:*/
    for(int ano = 1; ano <= 10; ano++){
        /*calculo do valor pela formula*/
        valor = principal * pow(1.0 + taxa, ano);
        /*escreve na tela o valor de cada ano:*/
        //obs: o 21 indica os espacos a serem dados.
        printf("Ano %i: R$ %21.2f\n", ano, valor);
    }
    return 0;
}