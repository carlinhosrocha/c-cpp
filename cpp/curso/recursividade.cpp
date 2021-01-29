#include <iostream>
using namespace std;
void contador(int num, int cont = 0);
//função principal:
int main(){
    contador(20); //função que exibe contagem na tela
    return 0;
}
//função com recursividade -> chama a si mesma n vezes
void contador(int num, int cont){
    cout << cont << endl;
    if(num > cont){
        contador(num, ++cont);
    }
}