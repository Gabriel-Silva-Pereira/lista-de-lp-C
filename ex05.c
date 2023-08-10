#include <stdio.h>

int main() {
    // Desenhar a figura 1
    printf("Figura 1:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    // Desenhar a figura 2
    printf("\nFigura 2:\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    // Desenhar a figura 3
    printf("Figura 3:\n");
    for (int i = 1; i <= 10; ++i) {
        // Imprimir espaços antes da coluna de *
        for (int j = 1; j <= 10 - i; ++j) {
            printf(" ");
        }

        // Imprimir a coluna de *
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");
    }

    printf("Figura 4:\n");
    for (int i = 10; i >= 1; --i) {
        // Imprimir espaços antes da coluna de *
        for (int j = 1; j <= 10 - i; ++j) {
            printf(" ");
        }

        // Imprimir a coluna de *
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}