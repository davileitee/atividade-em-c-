#include <stdio.h>
int main(){
	int a , b;
	
	printf("digite um numero:\n");
	scanf("%d",&a);
	
	printf("digite outro numero diferente do primero:\n");
	scanf("%d",&b);
	
	if(a>b){
		printf("Os valores em ordem crescentes sao: %d e %d", b, a);
	}else if(a<b){
		printf("Os valores em ordem crescentes sao: %d e %d", a, b);
	}else {
		printf("erro");
	}
	
	
	return 0;
}