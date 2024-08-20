#include <stdio.h>
int main (){
	int m, b, n, v ;
	float p_branco, p_nulo, p_valido;
	printf("numeros de eleitores de tal municipio:");
	scanf("%d", &m);
	
	printf("numero de votos brancos:");
	scanf("%d", &b);
	
	printf("numero de votos nulos:");
	scanf("%d", &n);
	
	printf("numero de votos validos:");
	scanf("%d",&v);
	
	p_branco= b /(float)m*100;
	p_nulo = n /(float) m *100;
	p_valido = v /(float) m *100 ;
	
	printf("\n%.2f\n",p_branco);
	printf("%.2f\n",p_nulo);
	printf("%.2f\n",p_valido);
	
	return 0;
}
