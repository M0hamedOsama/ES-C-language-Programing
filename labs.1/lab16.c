#include <stdio.h>

int main() {
    int num ;
    int abso ;

printf("enter a number: ");
scanf("%i", &num);

abso = (num >= 0) ? num : -num;
printf("The absolute value  is %i \n", abso);

    return 0;
}
