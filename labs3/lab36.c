#include <stdio.h>

int main()
{
    int size=0;
    int arr[size];

    printf("enter the number of elements to store in array :\n");
    scanf("%i",&size);

    printf("enter  %i number of elements in array :\n",size);

    int frequency_array[100]={0};

    for(int i=0;i<size;i++)
    {
        printf("element - %i : ",i);
        scanf("%i",&arr[i]);
        frequency_array[arr[i]]++;
    }

    for(int i=0;i<100;i++)
    {
        if(frequency_array[i]>0)
        printf("element - %i  appeared : %i times\n",i,frequency_array[i]);
    }
}
