#include <iostream>
using namespace std;
int number = 7; //variavel global
//programa principal
int main(void){
    double number = 10.5; //variavel local
    cout << "Variavel Global Number: " << ::number <<  endl;
    cout << "Variavel Local Number: " << number << endl;
}