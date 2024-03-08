#include <stdio.h>

int main() {
    int n =0;
    int i= 0 ;
    int sum = 0;

    printf("enter the number of terms: ");
    scanf("%d", &n);

    printf("The first natural numbers are: \n");
    for (i=1; i<= n; i++) {
        printf("%i ", i);
        sum += i;
}
    return 0;
}
