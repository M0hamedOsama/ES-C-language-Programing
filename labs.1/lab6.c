#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("enter the first number: ");
    scanf("%i", &num1);
    printf("enter the second number: ");
    scanf("%i", &num2);

if (num1 > num2) {
   printf("number 1 is greter than number 2");
}
else if(num1 < num2) {
printf("number 2 is greter than number 1");
}
else if (num1 == num2) {
printf("The numbers are equal \n");
}
else {
    printf("error");
}
    return 0;
}
