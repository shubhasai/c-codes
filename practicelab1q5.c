#include<stdio.h>
int main(){
    int ar[16],n;
    for(int i=0;i<16;i++){
      scanf("%d",&ar[i]);  
    }
    int current,max=0;
    for(int i=0;i<16;i++){
        current=1;
        for(int j=i+1;j<16;j++){
            if(ar[i]==ar[j]){
                current=current+1;
            }
        }
        if(current>max){
            max=current;
            n=ar[i];
        }
    }
    if(max==1){
        printf("ALL are unique");
    }
    else{
        printf("%d is most frequent.",n);
    }
    return 0;
}