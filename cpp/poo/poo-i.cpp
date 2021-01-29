#include <iostream>
using namespace std;
//criando uma classe de nome User:
class User{ //objetos sao instancias das classes
public: //atributos do tupo publico
    string nome = "<< Desconhecido >>";
    void name(string n); //prototipo de funcao
private: //atributos do tipo privado
    int ano_nasc;
    int cep;
    int cartao;
};
//metodo da classe User:
void User::name(string n){
    this->nome = n; //this->especifica que a variavel pertence a classe
}
//funcao principal:
int main(void){
    User *pessoa = new User(); //instanciando objeto
    string usuario;
    cout << "Nome de Usuario: ";
    cin >> usuario;
    pessoa->name(usuario);
    cout << "O nome do usuario eh: " << pessoa->nome; //exibindo artibuto do objeto User
}
