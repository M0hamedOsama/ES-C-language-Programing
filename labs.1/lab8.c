#include <stdio.h>

int main() {
int num;

printf("enter a number: ");
scanf("%i", &num);

if (num > 0) {
    printf("%i is a positive number\n", num);
}
else if (num < 0) {
    printf("%i is a negative number\n", num);
}
 else {
    printf("The number is zero\n");
}

    return 0;
}
