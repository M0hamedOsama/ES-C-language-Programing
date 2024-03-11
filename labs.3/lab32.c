#include <stdio.h>


int main()
{
int arr[]={12,3,4,5,6,67,6};
printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);
arr[1]=arr[1]+arr[3];
arr[3]=arr[1]-arr[3];
arr[1]=arr[1]-arr[3];

printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);
arr[1]=arr[1]^arr[3];
arr[3]=arr[3]^arr[1];
arr[1]=arr[3]^arr[1];
printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);

int t=arr[1];
arr[1]=arr[3];
arr[3]=t;
printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);

}
