#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número deve ser não negativo.\n");
        return 1;
    }

    int fatorial = 1;
    for (int i = 1; i <= num; ++i) {
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d\n", num, fatorial);

    return 0;
}