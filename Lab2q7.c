#include <stdio.h>
int main() {
    int a,b,c,d,e,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    g=a;
    if(g>b){
        g=g;
    }
    else{
        g=b;
    }
    if(g>c){
        g=g;
    }
    else{
        g=c;
    }
    if(g>d){
        g=g;
    }
    else{
        g=d;
    }
    if(g>e){
        g=g;
    }
    else{
        g=e;
    }
    printf("%d is the Largest",g);
    return 0;
}