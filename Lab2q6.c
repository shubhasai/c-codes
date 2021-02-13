#include <stdio.h>
int main() {
    int h1,h2,m1,m2,s1,s2,h,m,s;
    scanf("%d",&h1);
    scanf("%d",&m1);
    scanf("%d",&s1);
    scanf("%d",&h2);
    scanf("%d",&m2);
    scanf("%d",&s2);
    s=s1+s2;
    m=m1+m2+(s/60);
    h=h1+h2+(m/60);
    m=m%60;
    s=s%60;
    printf("Printing time in hrs:mins:secs\n");
    printf("Timestamp 1 = %d:%d:%d\n",h1,m1,s1);
    printf("Timestamp 2 = %d:%d:%d\n",h2,m2,s2);
    printf("Total time = %d:%d:%d",h,m,s);
    return 0;
}