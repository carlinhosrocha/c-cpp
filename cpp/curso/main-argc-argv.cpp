#include <iostream> //biblioteca de entrada/saída
#include <stdlib.h> //biblioteca padrão da linguagem
#include <string.h> //biblioteca para tratamentos de strings
using namespace std;
//função principal
int main(int argc, char *argv[]){
    //argc = total de argumentos | argv = os argumentos passados na execução do programa
    cout << argc << endl; //exibe o número de parâmentros passados
    cout << argv[1] << endl; //elemento passado na 2° posição
    if(argc > 1){
        if(!strcmp(argv[1], "dark")){ //função que retorna zero se os parâmetros forem iguais
            cout << "Modo dark padrao ativado!" << endl;
        }else{
            cout << "Modo light padrao ativado!" << endl;
        }
    }
    system("pause");
    return 0;
}