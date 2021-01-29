#include <stdio.h>
#include <stdlib.h>
//prototipo de funcao:
long fibonacci (long n);
//inicio da funcao principal:
int main(void){
    long result; //valor de fibonacci
    long number; //numero digitado pelo usuario
    //entrada de valor do usuario:
    printf("Digite um numero: ");
    scanf("%ld", &number);
    //calcula valor de fibonacci do numero digitado
    result = fibonacci(number);
    //exibe numero calculado:
    printf("Fibonacci (%ld) = (%ld)", number, result);
    return 0;
    system("pause");
}
//funcao que calcula valor de fibonacci:
long fibonacci (long n){
    //caso basico:
    if(n == 0 | n == 1){
        return n;
    }else{
        //etapa recursiva:
        return fibonacci(n-1) + fibonacci(n-2);
    }
}