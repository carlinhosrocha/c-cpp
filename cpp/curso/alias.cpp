#include <iostream>
using namespace std; //funcoes padrao da biblioteca padrao
//funcao principal:
int main(void){
    int x = 3; //variavel com valor 3
    int &y = x; //cria uma referencia a x (alias)
    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7; //altera valor de y e de x 
    cout << "x = " << x << endl << "y = " << y << endl;
}