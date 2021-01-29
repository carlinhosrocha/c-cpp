#include <iostream> //biblioteca padrao do c++
using namespace std; //indica ao compilador que estamos usando todos os comandos padroes do c++
//funcao inline(para funcoes pequenas, ajudando a reduzir o overhead):
inline double cube(const double side){ //funcao que retorna o valor do volume do cubo
    return side * side * side; //calcula o volume do cubo
}
//funcao principal:
int main(){
    double value; //variavel para armazenar o valor do volume calculado
    for(int i = 0; i < 3; i++){ //o processo se repetirá por tres vezes
        cout << "\nDigite o valor do lado do cubo em metros: "; //exibe a instrucao
        cin >> value; //armazena na variavel o valor digitado 
        cout << "O volume do cubo digitado com lado " << value << " m eh: " << cube(value)<< " metros cubicos." <<endl;
        //na instrucao acima eh feito a chamada de funcao com nome_funcao(parametro).
    }
}