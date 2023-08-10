#include <stdio.h>

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0) {
        printf("O numero é divisivel entre 5 e 3 ao mesmo tempo.");
    } else {
        printf("O numero não é divisivel entre 5 e 3 ao mesmo tempo.");
    }

    return 0;
}