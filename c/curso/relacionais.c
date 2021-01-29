#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //declaracao de variaveis:
    int jovem, idoso;
    jovem = 18;
    idoso = 60;
    int idade = 0;
    //pedindo a idade:
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    if(idade <= jovem){
        printf("A idade informada eh de um JOVEM!\n");
    }else{
        if(idade >= idoso){
            printf("A idade informada eh de um IDOSO!\n");
        }else{
            if((idade > jovem) && (idade < idoso)){
                printf("A idade informada eh de meia-idade!\n");
            }
        }
    }
    return 0;
}