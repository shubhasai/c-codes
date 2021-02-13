#include<stdio.h>
int check ();
int calculate();
int square();
int cube();
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    check(a,b);
    return 0;
}
int check(int n, int m){
    for(int i=n;i<=m;i++){
    int g;
    g=i;
    calculate(g);
    }
    return 0;
}
int calculate(int k){
int p,result;
if (k%2==0){
    p=3;
    result=cube(k,p);
}
else{
    p=2;
    result=square(k,p);
}
printf("%d ",result);
return 0;
}
int square (int base, int pow) 
{
    if (pow != 0)
        return (base * square(base, pow - 1));
    else
        return 1;
}
int cube (int base, int pow) {
    if (pow != 0)
        return (base * cube(base, pow - 1));
    else
        return 1;
}