#include <stdio.h>

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;

    printf("Bispo moveu 1 casa na diagonal\n");
    moverBispoRecursivo(casas - 1);
}

int main() {

    const int BISPO_CASAS = 3;
    const int TORRE_CASAS = 4;
    const int RAINHA_CASAS = 5;

    printf("=== Bispo (loop) ===\n");
    for (int i = 0; i < BISPO_CASAS; i++) {
        printf("Bispo moveu 1 casa na diagonal\n");
    }

    printf("\n=== Torre ===\n");
    for (int i = 0; i < TORRE_CASAS; i++) {
        printf("Torre moveu 1 casa para a direita\n");
    }

    printf("\n=== Rainha ===\n");
    for (int i = 0; i < RAINHA_CASAS; i++) {
        printf("Rainha moveu 1 casa para a esquerda\n");
    }

    printf("\n=== Cavalo (loops aninhados) ===\n");


    for (int horizontal = -2; horizontal <= 2; horizontal++) {
        for (int vertical = -2; vertical <= 2; vertical++) {

            if ((horizontal == 2 || horizontal == -2) && (vertical == 1 || vertical == -1)) {
                printf("Cavalo moveu (%d, %d)\n", horizontal, vertical);
            }
            else if ((vertical == 2 || vertical == -2) && (horizontal == 1 || horizontal == -1)) {
                printf("Cavalo moveu (%d, %d)\n", horizontal, vertical);
            }
            else {
                continue;
            }
        }
    }

    printf("\n=== Bispo (recursivo) ===\n");
    moverBispoRecursivo(BISPO_CASAS);

    
    printf("\n=== Torre com break ===\n");
    for (int i = 0; i < 10; i++) {
        if (i == TORRE_CASAS) {
            break; 
        }
        printf("Torre moveu 1 casa para a direita\n");
    }

    return 0;
}


