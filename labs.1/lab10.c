#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%i", &num);

if (num % 2 == 0) {
    printf(" even number.\n");
}
else {
    printf(" odd number.\n");
}

return 0;
}
