#include <stdio.h>
int main () {
  int a,b,p=1,i;
  scanf("%d",&a);
  scanf("%d",&b);
  if(b>=0){
  for(i=0;i<b;i++){
      p=p*a;
  }
  printf("%d raised to %d is %d",a,b,p);
  }
  else{
    for(i=0;i<-b;i++){
      p=p*a;
  } 
  printf("%d raised to %d is 1/%d",a,b,p);
  }
   return 0;
}