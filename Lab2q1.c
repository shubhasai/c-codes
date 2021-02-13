#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int tax;
    scanf("%d",&a);
    if(a<500000){
      tax=(a*5)/100;
      printf("%d",tax);
    }
    else if(a<1000000){
      tax=(a*7.5)/100;
      printf("%d",tax);
    }
    else{
      tax=(a*10)/100;
      printf("%d",tax);
    }
    return 0;
}