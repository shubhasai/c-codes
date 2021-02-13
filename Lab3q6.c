#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r=0;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        c=b%10;
        r=r+pow(c,3);
        b=b/10;
    }
    if(a==r){
        printf("Armstrong number");
    }
    else{
        printf("Normal number");
    }
return 0;
}