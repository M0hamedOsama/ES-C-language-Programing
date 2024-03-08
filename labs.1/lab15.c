#include <stdio.h>

int main() {
    int num;

    printf("enter the number: ");
    scanf("%i", &num);
    (num % 2 == 0) ? printf("the number is even.\n") : printf("the number is odd.\n");

    return 0;
}
