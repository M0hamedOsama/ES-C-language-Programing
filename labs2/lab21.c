#include <stdio.h>

int main() {
    int n;
    int i;

    printf("enter an integer: ");
    scanf("%i", &n);
    printf("the Cube of numbers \n",n);

    for (i = 1; i <= n; i++) {
        printf("cube of %d: %d\n", i, i * i * i);
    }
return 0;
}
