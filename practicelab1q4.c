#include<stdio.h>
int search();
int main()
{
   int a[11], element;
   int i;
   for(i=0; i<11; i++)
   {
       scanf("%d", &a[i]);
   }
   element=a[10];
   int result=search(a,element);
   if(result==0){
       printf("%d is not found",element);
   }
   else{
       printf("%d is first found at the %d-th position",element,result+1);
   }
   return 0;
} 
int search(int ar[],int x){
    for(int i=0;i<10;i++){
        if(x==ar[i])
        return i;
    }
    return 0;
}