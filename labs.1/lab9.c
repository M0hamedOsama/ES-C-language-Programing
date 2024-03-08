#include <stdio.h>

int main(){
	int num1;
	int num2 ;
	int num3 ;

printf("enter the  number 1 \n");
scanf("%i",&num1);
printf("enter the number 2 \n");
scanf("%i",&num2);
printf("enter the number 3 \n");
scanf("%i",&num3);

 if (num1 == num2 && num2 == num3) {
        printf("This is an equilateral triangle.\n");
    }
else if (num1 == num2 || num1 == num3 || num2 == num3) {
    printf("This is an isosceles triangle.\n");
}
else {
    printf("This is a scalene triangle.\n");
}

return 0 ;
}
