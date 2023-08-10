#include <stdio.h>

int main() {
    int num, originalNum, reverseNum = 0;
    printf("Digite um inteiro de cinco dígitos: ");
    scanf("%d", &num);

    originalNum = num;


    while (num != 0) {
        reverseNum = reverseNum * 10 + num % 10;
        num /= 10;
    }


    if (originalNum == reverseNum) {
        printf("O número %d é um palíndromo.\n", originalNum);
    } else {
        printf("O número %d não é um palíndromo.\n", originalNum);
    }

    return 0;
}