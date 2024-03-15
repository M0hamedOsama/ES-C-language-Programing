#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 6;
    int sum;

    sum = addnumbers(&num1, &num2);
    printf("%i", sum);

    return 0;
}

int addnumbers(int* num1, int* num2) {
    return (*num1) + (*num2);
}
