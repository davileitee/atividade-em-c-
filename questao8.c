#include <stdio.h>
int main(){
	int fim, inicio, duracao;
	
	printf("A que horas o jogo de xadrez comcecou?");
	scanf("%d", &inicio);
	
	printf("A que horas o jogo de xadrez terminou?");
	scanf("%d", &fim);
	
	  if (fim >= inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 - inicio) + fim;
    }printf("O jogo durou: %d horas",duracao);
	
	return 0;
}