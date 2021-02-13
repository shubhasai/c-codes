#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("For binary to decimal Enter 1\n");
    printf("For decimal to binary Enter 2\n");
    scanf("%d",&a);
    if(a==1){
        long int i,n,x=0,a;
	    printf("Enter any binary number: ");
	    scanf("%ld",&n);
	    printf("\nThe decimal conversion of %ld is ",n);
	    for(i=0;n!=0;++i)
	      {
		  a=n%10;
		  x=(a)*(pow(2,i))+x;
		  n=n/10;
	      }
	    printf("%ld",x);
    }
    else if(a==2){
        int dec, bin=0, rem, i=1;
        printf("Enter Decimal number: ");
        scanf("%d",&dec);
        while(dec!=0)
        {
         rem = dec % 2;
         bin += (rem*i);
         dec /= 2;
         i *= 10;
        }
        printf("Binary= %d\n",bin);
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}