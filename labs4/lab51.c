#include <stdio.h>

int main() {
    int n;
    int arr[n];

    printf("enter elements to store in the array: ");
    scanf("%i", &n);

    printf("enter %i  elements in the array:\n", n);
    for (int i=0; i<n; i++) {
        printf("element - %i : ", i);
        scanf("%i", &arr[i]);
    }

    printf("The elements entered:\n");
    for (int i=0; i<n;i++) {
        printf("element - %i : %i\n", i, *(arr + i));
    }

    return 0;
}
