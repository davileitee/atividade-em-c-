#include <stdio.h>

int main() {
	float fixo, vendas, comissao, total;
	float limite = 1500.0;
	
	printf("Digite o salario fixo: R$ ");
	scanf("%f", &fixo);
	
	printf("Digite o valor total das vendas efetuadas: R$ ");
    scanf("%f", &vendas);
    
    if (vendas <= limite) {
        comissao = vendas * 0.03;
    } else {
    	comissao = limite * 0.03;
        comissao += (vendas - limite) * 0.05;
	}
	
	total = fixo + comissao;
	
	printf("O salário total do vendedor e: R$ %.2f\n", total);

    return 0;
}
