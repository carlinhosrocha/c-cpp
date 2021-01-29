#include <iostream>
#include <stack>
using namespace std;
//função principal:
int main(){
    //pilha:
    stack <string> cartas;
    //adicionando elementos da pilha:
    cartas.push("Rei de Copa");
    cartas.push("Rei de Espada");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Pau");
    //retirando elementos da pilha:
    cartas.pop(); //exclui elemento do topo da pilha;
    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Carta do topo: " << cartas.top() << "\n"; //exibe o elemento que está no topo
    return 0;
}