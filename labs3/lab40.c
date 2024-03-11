#include <stdio.h>

void sort(){

	int arr[10]={6,55,1,34,55,22,5,10,2,85};
	int num;

	for(int i=0;i<10;i++){
		for(int j=0;j<9;j++){
			if(arr[j]<arr[j+1]){
			num=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=num;
			}
		}
	}

	printf("array sorted in descending order :\n");
	for(int i=0;i<10;i++){
		printf("%i ",arr[i]);
	}
}

int main() {
	sort();
    return 0;
}
