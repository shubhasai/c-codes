#include<stdio.h>
int fac();
int main(){
    int n;
    scanf("%d",&n);
    int result = fac(n);
    printf("The Factorial Is: %d",result);
    return 0;
}
int fac(int a){
    if(a!=0){
    return a*fac(a-1);
    }
    else{
        return 1;
    }
}