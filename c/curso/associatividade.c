#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//funcao principal:
int main(){  
    /*  Associatividade de operadores:
        Na ausencia de parentesis em operacoes matematicas
        a linguagem c executara da esquerda para a 
        direita, de acordo com a ordem de precedencia, para
        os seguintes operadores:
        
        == da esquerda para a direita ==
        1) ()
        2)|  *  |  /   | %  |    |
        3)|  +  |  -   |    |    |
        4)|  <  |  <=  | >  | >= |
        5)|  == |  !=  |    |    |

        == da direita para a esquerda ==
        1)| -- | ++ |
        2)| =  | += | -= | /= | %= |

    */
    system("pause");
    return 0;
}