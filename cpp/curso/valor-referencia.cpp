#include <iostream>
using namespace std;
//prototipos de funcao:
int squareByValue(int); //passagem por valor
int squareByReference(int &); //passagem por referencia
//programa principal:
int main(){
    int x = 2; //valor que sera elevado ao quadrado pela funcao squareByValue
    int z = 4; //valor que sera elevado ao quadrado pela funcao squareByRefence
    //demonstra squareByValue
    cout << "x = " << x << " antes da chamada da funcao squareByValue\n";
    cout << "Valor retornado por squareByValue: " << squareByValue(x) << endl;
    cout << "Valor de x apos a chamada da funcao: " << x << endl;
    //demonstra squareByReference
    cout << "z = " << z << " antes da chamada da funcao squareByReference\n";
    cout << "Valor retornado por squareByReference: " <<squareByReference(z) << endl;
    cout << "Valor de z apos a chamada de funcao: " << z << endl;
}
//funcao de passagem de parametro por valor:
int squareByValue(int number){
    return number *= number;
}
//funcao de passagem de parametro por referencia:
int squareByReference(int &numberRef){
    return numberRef *= numberRef;
}