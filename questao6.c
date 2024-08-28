#include <stdio.h>
int main (){
	int a , b;
	
	printf("digite um numero:\n");
	scanf("%d",&a);
	
	printf("digite outro numero diferente do primero:\n");
	scanf("%d",&b);
	
	if(a>b){
		printf("O MAIOR NUMERO E :%d",a);
	}else if (a<b){
		printf("O MAIOR NUMERO E :%d",b);
	}else {
		printf("erro")
	}
	
	
	return 0;
}