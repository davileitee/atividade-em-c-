#include <stdio.h>
int main() {
	int  n1, n2 , n3;
	float mf;
	printf("qual foi sua nota na n1 de 0 a 10?");
	scanf("%d", &n1);
	
	printf("qual foi sua nota na n2 de 0 a 10?");
	scanf("%d", &n2);
	
	printf("qual foi sua nota na n3 de 0 a 10?");
	scanf("%d", &n3);
	
	mf = (2*n1 + 3*n2 + 5*n3)/10;
	
	printf("a sua media final e de %.1f", mf);
	
	return 0;
}