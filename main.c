#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int a = 5;
    int b = 3;

    printf("Addition: %d\n", addition(a, b));
    printf("Multiplication: %d\n", multiplication(a, b));

    return 0;
}