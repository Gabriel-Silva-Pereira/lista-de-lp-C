#include <stdio.h>

int main() {
    printf("Os 100 primeiros números primos são:\n");

    int count = 0;
    int num = 2; 

    while (count < 100) {
        int isPrime = 1; 

        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            ++count;
        }

        ++num;
    }

    printf("\n");

    return 0;
}