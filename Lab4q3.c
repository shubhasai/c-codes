#include<stdio.h>
int primefac();
int main(){
    int n;
    scanf("%d",&n);
    primefac(n);
    return 0;
}
int primefac(int a){
    if(a>1){
        printf("The prime factors of %d are:\n",a);
        int i=2;
        while(a!=1)
        {
          if(a%i==0)
          {
            while(a%i==0){
                printf("%d ",i);
                a=a/i;
            }
          }
          i++;
        }
    }
    else{
        printf("Number should be larger than 1.");
    }
    return 0;
}