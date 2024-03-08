#include <stdio.h>

int main() {
    int degree;

printf("Enter the degree: \n");
scanf("%i", &degree);

if (degree < 50) {
    printf("Faild\n");
}
else if (degree >= 50 && degree < 65) {
    printf("passed\n");
}
else if (degree >= 65 && degree < 75) {
    printf("good\n");
}
else if (degree >= 75 && degree < 85) {
    printf("Very god\n");
}
else if (degree >= 85 && degree <= 100) {
    printf("excelent\n");
}
else {
    printf("Error\n");
}

    return 0;
}
