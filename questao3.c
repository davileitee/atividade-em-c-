#include <stdio.h>
int main(){
	
	int m;
	float maca1=1.00, maca3=1.30, resultado;
	
	printf("quantas macas voce ira comprar?");
	scanf("%d", &m);
	
	if(m>=12){
		printf("O preco total e de:%.2f reais",resultado=m*maca1);
	}else if(m<12){
		printf("O preco total e de:%.2f reias",resultado= m*maca3);
	}
	
	return 0;
}