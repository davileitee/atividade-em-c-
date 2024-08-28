#include <stdio.h>
int main (){
	int a;
	
	printf("escreva um numero sendo positivo ou negativo:");
	scanf("%d", &a);
	
	if (a>=0){
		printf("O NUMERO E POSITIVO!!");
	}else if(a<0){
		printf("O NUMERO E NEGATIVO");
	}else {
		printf("valor invalido");
	}

	return 0;
}