#include <stdio.h>
#include <stdlib.h>
//funcao principal:
int main(void){
	int num;
	int fat = 1;
	printf("Digite o numero a ser calculador o fatorial: ");
	scanf("%i", &num);
	//calculo do fatorial
	for(int cont = num; cont >= 1; cont--){
		fat = fat * cont;
	}
	printf("\nO fatorial do numero eh: %i.\n", fat);
	system("pause");
	return 0;
}