#include <stdio.h>
/* inicio da funcao principal: */
int main(void){
    int notaUm = 9;
    int notaDois = 8;
    float media;
    /* (float) converte a divisao de inteiros */
    media = (float)(notaUm + notaDois)/2;
    /* %.2f indica a precisao de duas casas decimais */
    printf("%.2f", media);
    return 0;
}