#include <stdio.h>
int main (){
	int a,b,c;
	
	printf("escrveva o ano atual:");
	scanf("%d", &a);
	
	printf("escrveva o ano em que voce nasceu:");
	scanf("%d", &b);
	
	c=a-b;
	
	if(c>=16){
		printf("voce podera votar este ano.");
	}else if (c<16){
		printf("voce nao podera votar este ano.");
	}else {
		printf("ERRO!");
	}
	
	return 0;
}