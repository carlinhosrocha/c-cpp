#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){
    //declaracao das variaveis:
    double one, two, res;
    char op;
    do{
        res = one = two = 0;
        printf("============================\n");
        printf("====== CALCULADORA 2.0 =====\n");
        printf("============================\n");
        printf("[0] para sair do programa\n");
        printf("[1] para somar os numeros\n");
        printf("[2] para subtrair os numeros\n");
        printf("[3] para multiplicar os numeros\n");
        printf("[4] para dividir os numeros\n");
        printf("///////////////////////////\n");
        //armazenando a escolha em 'op'
        printf("Digite a opcao desejada: \n");
        scanf("%c", &op);
        printf("\nDigite o primeiro numero: \n");
        scanf("%f", &one);
        printf("Agora, digite o segundo numero: \n");
        scanf("%f", &two);
        if(op == '1'){
            res = one + two;
        }else{
            if(op =='2'){
                res = one - two;
            }else{
                if(op == '3'){
                    res = one * two;
                }else{
                    if(op == '4'){
                        res = one / two;
                    }
                }
            }
        }
        printf("/////////////////////////////\n");
        printf("O resultado eh: %f.\n", res);
        printf("/////////////////////////////\n");
        //pausa o programa:
        system("pause");
        //limpa a tela:
        system("cls");
    }while(op != '0');
    printf("Voce saiu do programa... :(\n");
    return 0;
}