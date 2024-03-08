#include <stdio.h>

int main(){

int i=0 ;
int sum = 0;
int x ;

for (i=1;i<10;i++){
    printf("%i -",i);
    scanf("%i", &x);
    sum+=x ;

}
printf("%i\n",sum);

printf("%i",sum/i);
return 0 ;

}
