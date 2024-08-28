#include <stdio.h>

int main() {
	int conta;
	float saldo, debito, credito, atual;
	
	printf("Digite o numero da conta: ");
	scanf("%d", &conta);
	
	printf("Digite o saldo atual: R$ ");
	scanf("%f", &saldo);
	
	printf("Digite o valor do debito: R$ ");
	scanf("%f", &debito);
	
	printf("Digite o valor do credito: R$ ");
	scanf("%f", &credito);
	
	atual = saldo - debito + credito;
	
	printf("O saldo atual da conta %d e: R$ %.2f\n", conta, atual);
	
	if (atual >= 0) {
		printf("Saldo Positivo.\n");
	} else {
		printf("Saldo Negativo.\n");
	}
	
	
	return 0;
}
