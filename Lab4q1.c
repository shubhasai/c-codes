#include<stdio.h>
int each(int a, int b,int c);
int total();
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    each(i,j,k);
    return 0;
}
int each(int a, int b,int c){
    int l,m,n;
    l=15*a;
    m=2*b;
    n=25*c;
    if(a!=0){
    printf("Cost of %d pens at Rs 15 each = Rs %d\n",a,l);
    }
    if(b!=0){
    printf("Cost of %d pencils at Rs 2 each= Rs %d\n",b,m);
    }
    if(c!=0){
    printf("Cost of %d notebooks at Rs 25 each = Rs %d\n",c,n);
    }
    total(l,m,n);
    return 0;
}
int total(int A,int B,int C){
    int sum;
    sum=A+B+C;
    if(sum==0){
        printf("You need to add items to your cart.");
    }
    else{
        printf("Total amount to be paid= Rs %d\n",sum);
    }
    return 0;
}