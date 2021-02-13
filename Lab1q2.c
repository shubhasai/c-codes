#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num1;
    int num2;
    int num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    num3 = num1+num2;
    printf("%d \n",num3);
    num3 = num1-num2;
    printf("%d \n",num3);
    num3 = num1*num2;
    printf("%d \n",num3);
    num3 = num1/num2;
    printf("%d \n",num3);
    num3 = pow(num1,num2);
    printf("%d \n",num3);
    num3 = num1%num2;
    printf("%d \n",num3);
    return 0;
}