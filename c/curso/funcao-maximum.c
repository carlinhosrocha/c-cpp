#include <stdio.h>
//funcao maximum:
int maximum(int x, int y, int z){
        int max = x;
    if(max < y)
        max = y;
    if(max < z){
        max = z;
  }
  return max;
}
//funcao principal:
int main(void){
  int numUm, numDois, numTres;
  printf("Digite tres valores: \n");
  scanf("%d%d%d", &numUm, &numDois, &numTres);
  int maximo = maximum(numUm, numDois, numTres);
  printf("O maior dos digitados eh: %i.", maximo);
  return 0;
}
