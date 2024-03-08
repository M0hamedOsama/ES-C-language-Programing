#include <stdio.h>

int main() {
    char operator;
    int num1;
    int num2;
    int result;

    printf("enter operator (+, -, *, /): \n");
    scanf("%c", &operator);

    printf("Enter first number: \n");
    scanf("%i", &num1);
    printf("Enter secound number: \n");
    scanf("%i", &num2);


switch (operator) {
    case'+':
    result = num1 + num2;
    break;
    case'-':
    result = num1 - num2;
    break;
    case'*':
    result = num1 * num2;
    break;
    case'/':
    result = num1 / num2;
    break;
    default:
    printf("error\n");
    return 0;
}

    printf("Result: %i\n", result);

    return 0;
}
