#include <stdio.h>

int main() {
    int day;

    printf("Enter a number of day: ");
    scanf("%i", &day);

switch(day) {
    case 1:
    printf("sunday\n");
    break;
    case 2:
    printf("monday\n");
    break;
    case 3:
    printf("tuesday\n");
    break;
    case 4:
    printf("wednesday\n");
    break;
    case 5:
    printf("thursday\n");
    break;
    case 6:
    printf("Friday\n");
    break;
    case 7:
    printf("saturday\n");
    break;
    default:
    printf("error.\n");
    }

    return 0;
}
