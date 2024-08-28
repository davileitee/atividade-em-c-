#include <stdio.h>

int main() {
	float trabalhadas, hora, total;
	float semanais = 40.0;
	float mensais = semanais *4;
	float extras , salarioextra;
	
	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &trabalhadas);
	
	printf("Digite o salario por hora: ");
	scanf("%f", &hora);
	
	if (trabalhadas > mensais) {
		extras = trabalhadas - mensais;
		salarioextra = extras * hora * 1.5;
		total = (mensais * hora) + salarioextra;
	}else {
		total = trabalhadas * hora;
	}
	
	printf("O salario total do funcionario e: R$ %.2f\n", total);
	
	return 0;
}
