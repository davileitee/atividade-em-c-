#include <stdio.h>

int main() {
    int atual, maxima, minima;
    float media;
    
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &atual);
    
    printf("Digite a quantidade maxima em estoque: ");
    scanf("%d", &maxima);
    
    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &minima);
    
    media = (maxima + minima) / 2.0;
    
    printf("A quantidade media e: %.2f\n", media);
    
    if (atual >= media) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}
