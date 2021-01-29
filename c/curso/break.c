#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //break     -> finaliza o nosso ciclo
    //continue  -> interrompe o nosso laco
    for(int x = 0; x <= 10; ++x){
        if(x == 1){
            //o looping sera interrompido
            continue;
        }
        if(x == 8){
            //o looping sera finalizado
            break;
        }
        printf("%i\n", x);
    }
    system("pause");
    return 0;
}