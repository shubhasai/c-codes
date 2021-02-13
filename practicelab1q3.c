#include<stdio.h>
int reverse();
int main(){
    int a[8];
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    int size=8;
    reverse(a, 0, size-1);
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
int reverse(int ar[], int s, int e) {
    int temp;
    if (s < e) {
        temp = ar[s];
        ar[s] = ar[e];
        ar[e] = temp;
        reverse(ar, s+1, e-1);
    }     
    return 0;  
}