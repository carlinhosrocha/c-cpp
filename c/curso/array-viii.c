#include <stdio.h>
//funcao principal:
int main(void){
    char string[] = {"first"}; //array de caracteres com 6 elementos (\0 para finalizar)
    char nome[20]; //array para armazenar nome de ate 19 letras (\0 para finalizar)
    scanf("%19s", nome); //armazena caracteres digitados no array nome
    printf(nome);
    return 0;
}