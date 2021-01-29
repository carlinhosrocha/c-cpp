#include <stdlib.h>
#include <iostream>
using namespace std;
int soma(int n1, int n2); //protótipo de função
int soma(int n1, int n2, int n3);
//função principal:
int main(){
    cout << soma(15, 25) << endl;
    cout << soma(34, 12, 56) << endl;
    return 0;
    system("pause");
}
//sobrecarga de função -> funções com mesmo nome e número de argumentos diferentes
int soma(int n1, int n2){
    return n1 + n2;
}
int soma(int n1, int n2, int n3){
    return n1 + n2 + n3;
}