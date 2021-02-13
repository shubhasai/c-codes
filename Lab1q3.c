#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float num1;
    float num2;
    float arearectangle;
    printf("enter length and breadth of rectangle \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    arearectangle= num1*num2;
    printf("area of rectangle%f \n",arearectangle);
    float s1;
    float areasquare;
    printf("enter side of square \n");
    scanf("%f", &s1);
    areasquare = s1*s1;
    printf("area of square%f \n",areasquare);
    float r;
    float areacircle;
    printf("enter radius of circle \n");
    scanf("%f", &r);
    areacircle = 3.14*(r*r);
    printf("area of circle%f \n",areacircle);
    float a,b,c,d,e,f;
    printf("enter sides scalene triangle \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    d = (a+b+c) / 2;
    e=d*(d-a)*(d-b)*(d-c);
    f=pow(e,0.5);
    printf("area of triangle%f \n",f);
    float k,ar;
    printf("enter side of equilateral triangle \n");
    scanf("%f", &k);
    ar = 0.433*(a*a);
    printf("area of equilateral triangle = %f \n",ar);
    float p,q,rs;
    printf("enter base and height of right angle triangle \n");
    scanf("%f", &p);
    scanf("%f", &q);
    rs=0.5*(p*q);
    printf("area of right triangle = %f \n",rs);
    return 0;
}