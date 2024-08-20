#include <stdio.h>

int main(){
	float salario, reajuste, pos_reajuste;
	printf("o salario e:");
	scanf("%f", &salario);
	
	printf("o reajuste e de :");
	scanf("%f", &reajuste);
	
	pos_reajuste= (float)salario + (salario * reajuste /100);
	printf("o salario final e %.2f", pos_reajuste);
	return 0;
}