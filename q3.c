#include <stdio.h>
int main(){
	int a, m ,d , t;
	
	printf("idade em anos:");
	scanf("%d", &a);
	
	printf("escreva em meses:");
	scanf("%d", &m);
	
	printf("escreva em dias:");
	scanf("%d", &d);
	
	t= a * 365 + m *30 + d ;
	printf ("sua idade em dias e %d\n", t);
	
	return 0;
	
}