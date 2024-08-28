#include <stdio.h>

int main() {
    char nome[50];
    float altura, peso_ideal;
    char sexo;

    printf("Digite o nome: ");
    scanf("%s", nome);


    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); 

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        return 1; 
    }


    printf("%s, o seu peso ideal e: %.2f kg\n", nome, peso_ideal);

    return 0;
}

