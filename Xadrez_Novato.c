#include <stdio.h>

int main() {
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n=== Movimento do Bispo ===\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    printf("\nMovimentacao concluida!\n");
    return 0;
}
