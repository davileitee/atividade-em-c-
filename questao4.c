#include <stdio.h>
int main(){
	float nota1 , nota2, media;
	
	
	printf("escreva quanto voce tirou na primeira avaliacao (1 a 10):");
	scanf("%f",&nota1);
	
	printf("escreva quanto voce tirou na segunda avaliacao (1 a 10):");
	scanf("%f",&nota2);
	
	media=(nota1+nota2)/2; 
	
	
	if (media>=7){
		printf("APROVADO!");
	}else if (media<7){
		printf("REPROVADO!");
	}else {
		printf("VALOR INVALIDO");
	}
	
	
	return 0;
}