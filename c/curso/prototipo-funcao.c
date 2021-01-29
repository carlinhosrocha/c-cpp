#include <stdio.h>
//prototipo de funcao:
int maximum(int x, int y, int z);
//funcao principal:
int main(void){

	return 0;
}
//definicao funcao-maximum:
int maximum(int x, int y, int z){
	int max = x;
	if(max < y){
		max = y;
	}
	if(max < z){
		max = z;
	}
}