#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //declaracao da variaveis:
    float notaUm, notaDois, notaTres, notaQuatro, media;
    notaUm = notaDois = notaTres = notaQuatro = media = 0;
    printf("==================================\n");
    printf("= MEDIA DAS NOTAS ESCOLARES 1.0 =\n");
    printf("==================================\n");
    printf("Digite a sua primeira nota bimestral: \n");
    scanf("%f", &notaUm);
    printf("Digite sua segunda nota bimestral: \n");
    scanf("%f", &notaDois);
    printf("Digite sua terceira nota bimestral: \n");
    scanf("%f", &notaTres);
    printf("Por fim, digite sua ultima nota bimestral: \n");
    scanf("%f", &notaQuatro);
    //calculo da media:
    media = (notaUm + notaDois + notaTres + notaQuatro)/4;
    //inicio das condicoes:
    if (media >= 7){
        printf("Parabens, voce foi aprovado com %f.\n", media);
    }
    else{
        printf("Desculpe, mas voce foi reprovado com %f.\n", media);
    }
    // && ('e')
    // || ('ou')
    return 0;
}