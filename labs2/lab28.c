#include <stdio.h>

void checkEvenOdd(int num) {
    if (num&1) {
        printf("the number is odd.\n");
    }
    else {
        printf("The number is even.\n");
    }
}

int main() {
    int number;

    printf("input any number: ");
    scanf("%i", &number);

    checkEvenOdd(number);
    return 0;
}
