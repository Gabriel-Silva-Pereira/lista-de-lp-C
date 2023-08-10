#include <stdio.h>

int main() {
    printf("Tabela de Triplos de Pitágoras:\n");
    printf("side1   side2   hypotenuse\n");

    for (int side1 = 1; side1 <= 500; ++side1) {
        for (int side2 = 1; side2 <= 500; ++side2) {
            for (int hypotenuse = 1; hypotenuse <= 500; ++hypotenuse) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%-7d %-7d %-10d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}