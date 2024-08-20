#include <stdio.h>
int main(){
	float tf, tc;
	printf("quantos graus esta em Fahrenheit?");
	scanf("%f",&tf);
	
	tc = 5/(9 /(tf-32)) ;
	
	printf("a temperatura em Graus Celcils e de %.3f",tc);

	
	return 0;
}