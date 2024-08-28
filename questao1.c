#include <stdio.h>
int main (){
	int a;
	
	printf("escreva um numero:");
	scanf("%d", &a);
	
	if(a<10){
		printf("NAO E MAIOR QUE 10!!");
	}else if (a>10){printf("E MAIOR QUE 10!!");
	}else if (a==10){
		printf("E IGUAL A 10!!");
	}
	else {printf("invalido");
	}
	
	return 0;
}