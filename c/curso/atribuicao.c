#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(){
    //operadores de atribuicao:
    //  x = x + 1
    /*
    incremento:     x += n  (x = x + n)
    decremento:     x -= n  (x = x - n)
    multiplicacao:  x *= n  (x = x * n)
    divisao:        x /= n  (x = x / n)
    modulo:         x %= n  (x = x % n)
    */
    int x = 0;
    while(x <= 10){
        printf("%i\n", x);
        x += 1;
    }
    return 0;
}