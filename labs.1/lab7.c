#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("enter the first number : ");
    scanf("%i", &num1);

    printf("enter the second number : ");
    scanf("%i", &num2);

if (num1 == num2) {
    printf("Number1 and Number2 are equal\n");
}
else {
    printf("Number1 and Number2 are not equal\n");
}

    return 0;
}
