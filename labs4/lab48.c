#include <stdio.h>

int main() {
    int num1;
    int num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum;

    *ptr1 = 5;
    *ptr2 = 6;

    sum = *ptr1 + *ptr2;

    printf("%i", sum);

    return 0;
}
