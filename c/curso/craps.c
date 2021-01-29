#include <stdio.h>
#include <stdlib.h>
#include <time.h> //contem prototipo para a funcao time
//constantes de enumeracao indicam status do jogo
enum Status {CONTINUE, WON, LOST};
int rollDice(void);//prototipo de funcao
//inicio da funcao principal:
int main(void){
    int sum;     //soma dos dados lancados
    int myPoint; //ponto ganho
    enum Status gameStatus; //pode conter CONTINUE, WON e LOST
    //randomiza gerador de valor aleatorio pela hora atual
    srand(time(NULL));
    //determina status do jogo com base na soma dos dados
    sum = rollDice();
    switch(sum){
        //jogador vence:
        case 7:
        case 11:
        gameStatus = WON;
        break;
        //jogador perde:
        case 2:
        case 3:
        case 12:
        gameStatus = LOST;
        break;
        default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Meu ponto eh : %d.\n", myPoint);
        break;
    }
    //enquanto jogo nao termina:
    while(gameStatus = CONTINUE){
        //joga dados novamente:
        sum = rollDice();
        //determina status do jogo:
        if(sum == myPoint){
            gameStatus = WON;
        }else{
            if(sum == 7){
                gameStatus = LOST;
            }
        }
    }
    if(gameStatus = WON){
        printf("JOGADOR VENCEU!\n");
    }else{
        printf("JOGADOR PERDEU!\n");
    }
    system("pause");
    return 0;
}
//funcao que joga os dados:
int rollDice(void){
    int die1;
    int die2;
    int workSum;
    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;
    printf("Jogador rolou: %d + %d = %d.\n", die1, die2, workSum);
    return workSum; //retorna a soma dos dados;
}
