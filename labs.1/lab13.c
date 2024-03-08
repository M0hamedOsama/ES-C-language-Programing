#include <stdio.h>

int main() {
    int num1;
    int num2 ;

    printf("Enter first number: ");
    scanf("%i", &num1);
    printf("Enter second number: ");
    scanf("%i", &num2);

switch(num1 > num2) {
    case 1:
    printf("num1 is max \n");
    break;
    case 0:
    printf("num2 is max");
    break;
}

    return 0;
}
