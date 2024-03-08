#include <stdio.h>

int main(){
int num =1;
int i ;
int j ;
int k ;
int rowos =0;

scanf("%i",&rowos);

for (i=1;i<=rowos;i++)
{
      for (j =(rowos-i);j>0;--j)
      {
        printf(" ");
      }
      for (k=0;k<i ;++k)
      {
        printf("%i ",num);
        num++;
      }
  printf("\n");
}
return 0 ;
}
