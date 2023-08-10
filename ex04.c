#include <stdio.h>

int main() {
    int numValores;

    printf("Digite o número de valores a serem inseridos: ");
    scanf("%d", &numValores);

    if (numValores <= 0) {
        printf("O número de valores deve ser maior que zero.\n");
        return 1;
    }

    int valores[numValores];

    printf("Digite os %d valores inteiros:\n", numValores);

    
    for (int i = 0; i < numValores; ++i) {
        scanf("%d", &valores[i]);
    }

    
    int menorValor = valores[0];
    for (int i = 1; i < numValores; ++i) {
        if (valores[i] < menorValor) {
            menorValor = valores[i];
        }
    }

    printf("O menor valor inserido é: %d\n", menorValor);

    return 0;
}