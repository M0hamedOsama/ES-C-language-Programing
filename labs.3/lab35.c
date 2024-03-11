#include <stdio.h>

int main()
{
int size=0;
int sum=0;


printf("enter the number of elements to store in array :\n");
scanf("%i",&size);

int arr[size];

printf("enter %i number of elements in array :\n",size);

   for(int i=0; i<size; i++)
    {
        printf("element - %i : ",i);
        scanf("%i",&arr[i]);
        sum+=arr[i];
    }


printf("sum = %i",sum);
}
