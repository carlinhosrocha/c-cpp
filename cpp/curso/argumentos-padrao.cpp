#include <iostream>
using namespace std;
int rotina(int x = 10, string y= "Bem-Vindo!"); //argumentos padrão
//função principal:
int main(){
    rotina(); //chamada de função com argumentos padrão
    rotina(5, "Hello World!"); //chamada de função com argumentos passados
    return 0;
}
int rotina(int x, string y){
    for(int i = 0; i < x; i++){
        cout << y << endl;
    }
    return 0;
}