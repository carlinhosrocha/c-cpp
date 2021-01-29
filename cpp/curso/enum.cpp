#include <iostream>
//namespace padrão
using namespace std;
//função principal:
int main(){
    //enum = nome{0, 1, 2, 3}
    enum armas{fuzil, revolver, pistola, escopeta};
    armas armaSel;
    armaSel = fuzil;
    //exibindo valor de armas:
    cout << armaSel;
    return 0;
}