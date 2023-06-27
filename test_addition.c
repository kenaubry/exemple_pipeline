#include <stdio.h>
#include "addition.h"

void testAddition() {
    int result = addition(2, 3);
    if (result == 5) {
        printf("Test passed\n");
    } else {
        printf("Test failed\n");
    }
}

int main() {
    testAddition();

    return 0;
}