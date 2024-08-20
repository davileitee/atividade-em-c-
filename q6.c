#include <stdio.h>
int main(){
	float ct, cf , pd, im;
	pd= 28.0;
	im= 45.0;
	printf("qual o custo de fabrica do veiculo?");
	scanf("%f", &cf);
	
	ct= cf +(cf * pd /100)+(cf * im /100);
	
	
	printf("o custo final do carro e de %.3f",ct );
	return 0;
}