#include <stdio.h>

void printarray11(int arr[]) {
	for (int i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
}

printf("\n element stored in array :\n");
    for (int j = 0; j < 10; j++) {
        printf("element - %d : %d\n", j, arr[j]);
}

}


int main() {
    int arr[10];
    printarray11(arr);
    return 0;
}
