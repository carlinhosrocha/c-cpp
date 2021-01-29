#include <stdio.h>
//funcao principal:
int main(void){
    //declaracao de variaveis:
    int nota;
    int Acont = 0;
    int Bcont = 0;
    int Ccont = 0;
    int Dcont = 0;
    int Fcont = 0;
    //pedido de entrada dos dados:
    printf("Digite as notas em letra (EOF para encerrar): \n");
    //inicia loop de entrada de notas:
    while((nota = getchar()) != EOF){
        switch(nota){
            case 'A':
            case 'a':
                ++Acont;
                break;
            case 'B':
            case 'b':
                ++Bcont;
                break;
            case 'C':
            case 'c':
                ++Ccont;
                break;
            case 'D':
            case 'd':
                ++Dcont;
                break;
            case 'F':
            case 'f':
                ++Fcont;
                break;
            case '\t':
            case '\n':
            case ' ':
                break;
            default:
                printf("Letra de nota incorreta. Digite outra letra.\n");
        }
    }
    printf("\nTotais para cada nota sao: \n");
    printf("A: %d\n", Acont);
    printf("B: %d\n", Bcont);
    printf("C: %d\n", Ccont);
    printf("D: %d\n", Dcont);
    printf("F: %d\n", Fcont);
    return 0;
}