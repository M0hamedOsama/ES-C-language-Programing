#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;
    int max ;

    for (int i=0;i <5; i++)
        {
        printf("enter element %i::: ",i+1);
        scanf("%i", &arr[i]);
    }

    ptr=arr;
    max = arr[0];


    for (int i = 1; i < 5; i++) {
       if (*ptr > max) {
          max = *ptr;
        }
        ptr++;
    }

    printf("largest number in array : %i\n", max);

    return 0;
}
