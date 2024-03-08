#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n<=1) {
        return false;
    }
    for (int i=2; i*i<=n;i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    printf("input a positive number: ");
    scanf("%i", &number);

    if (isPrime(number)) {
        printf("the number is prime number\n", number);
    } else {
        printf("the number is not prime number\n", number);
    }

    return 0;
}
