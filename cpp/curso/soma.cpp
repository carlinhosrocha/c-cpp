#include <iostream> //define a biblioteca padrao do c++
//funcao principal:
int main(){
    //declaracao de variaveis:
    int numUm;
    int numDois;
    int soma;
    //saida de informacoes e entrada de dados:
    std::cout << "Digite o primeiro numero: "; //exibe uma mensagem na tela
    std::cin >> numUm; //captura e armazena o valor na variavel
    std::cout << "Digite o segundo numero: "; //exibe mensagem na tela
    std::cin >> numDois; //captura valor e armazena na segunda variavel
    soma = numUm + numDois; //soma os valores digitados
    std::cout << "A soma eh: " << soma << std::endl; //mostra a soma dos valores
}