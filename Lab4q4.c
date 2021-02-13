#include <stdio.h>
int hcf(int,int);
int LCM(int, int, int);
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    hcf(x,y);
    return 0;
}
int hcf(int m, int n){
      int HCF,t;
      int a = m;
      int b = n;
    while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  HCF=a;
  LCM(m,n,HCF);
  printf("HCF of %d and %d is %d\n", m, n, HCF);
  return 0;
}
int LCM(int i,int j,int k){
    int lcm;
    lcm = (i*j)/k;
    printf("LCM of %d and %d is %d\n", i, j, lcm);
    return 0;
}