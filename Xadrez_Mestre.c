#include <stdio.h>

void moverTorre(int casas, int atual) {
    if (atual == casas) return;
    printf("Direita\n");
    moverTorre(casas, atual + 1);
}

void moverBispo(int vertical, int horizontal, int i) {
    if (i == vertical) return;
    for (int j = 0; j < horizontal; j++) {
        printf("Cima e Direita\n");
    }
    moverBispo(vertical, horizontal, i + 1);
}

void moverRainha(int casas, int atual) {
    if (atual == casas) return;
    if (atual % 2 == 0)
        printf("Direita\n");
    else
        printf("Cima e Direita\n");
    moverRainha(casas, atual + 1);
}

void moverCavalo(int movimentos) {
    int contador = 0;
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue;
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            contador++;
            if (contador >= movimentos) break;
        }
        if (contador >= movimentos) break;
    }
}

int main() {
    int casasTorre = 4;
    int casasBispo = 3;
    int casasRainha = 5;
    int movimentosCavalo = 2;

    printf("=== Movimento da TORRE ===\n");
    moverTorre(casasTorre, 0);

    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(casasBispo, 2, 0);

    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(casasRainha, 0);

    printf("\n=== Movimento do CAVALO ===\n");
    moverCavalo(movimentosCavalo);

    printf("\n=== Fim da Simulação ===\n");
    return 0;
}
