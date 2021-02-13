#include <stdio.h>
int check();
int main()
{
    int n;
    scanf("%d", &n);
    check(n);
    return 0;
}
int check(int a){
    int  rN = 0, remainder,oN;
    oN = a;
    if(a>0){
    while (a != 0) {
        remainder = a % 10;
        rN = (rN * 10) + remainder;
        a /= 10;
    }
    if (oN == rN){
        printf("Reversed number is %d.\n", rN);
        printf("%d is a palindrome.", oN);
    }
    else{
        printf("Reversed number is %d.\n", rN);
        printf("%d is not a palindrome.", oN);
    }
    }
    else{
        a=-a;
         while (a != 0) {
        remainder = a % 10;
        rN = (rN * 10) + remainder;
        a /= 10;
    }
    if (oN == -rN){
        printf("Reversed number is %d.\n", -rN);
        printf("Ambiguity (palindrome as an integer, not as a string)");
    }
    else{
        printf("Reversed number is %d.\n", -rN);
        printf("%d is not a palindrome.", -oN);
    }
    }
}