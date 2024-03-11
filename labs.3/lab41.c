#include<stdio.h>
int main()
{
    int arr[]={5,55,225,225,35,2545,9,1,48,4,1,8,2,4,5,9,6};
    int size=sizeof(arr)/4;
    int flag=0;
    int number;

    printf("enter a number\n");
    scanf("%i",&number);

    for(int i=0;i<size;i++)
    {
        if(number==arr[i])
        {
            flag=1;
            break;
        }
    }

    if(flag) printf("number is found \n");
    else printf("number is not found \n");
}
