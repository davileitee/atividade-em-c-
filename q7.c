#include <stdio.h>
int main(){
	float sf, cf, vve, vt , cv, salariof;
	printf("quantos carros o vendedor vendeu?");
	scanf("%f", &cf);
	
	printf("quanto o vendedor faturou ao total com suas vendas?");
	scanf("%f", &vt);
	
	printf("qual o salario fixo do vendendor?");
	scanf("%f", &sf);
	
	printf("valor que ele recebe por cada carro vendido:");
	scanf("%f", &cv);
	
	cf = cf * cv;
	vve= vt * 5/100;
	
	salariof= sf + cf + vve;
	printf("o salario final do vendedor e de %.3f", salariof);
	
	
	return 0;
}