#include <stdio.h>

void printarray112() {
    int arr[3] = {4,1,8};

    printf("The value stored into array :\n");

    for (int i = 0; i < 3; i++)
        {
        printf("%i ", arr[i]);
        }

    printf("\nthe value stored into array in reverse  :\n");
    for (int j = 2; j >= 0; j--)
     {
        printf("%i ", arr[j]);
    }
}

int main() {
    printarray112();
    return 0;
}
