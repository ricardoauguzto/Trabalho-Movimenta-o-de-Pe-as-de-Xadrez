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

    printf("\n=== Movimento do Cavalo ===\n");
    for (int a = 1; a <= 2; a++) {
        printf("Casa %d: Baixo\n", a);
        int b = 1;
        while (b <= 1 && a == 2) {
            printf("Casa %d: Esquerda\n", a + b);
            b++;
        }
    }

    printf("\nMovimentacao concluida!\n");
    return 0;
}
