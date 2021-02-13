#include <stdio.h>
#include <stdlib.h>
int ar[10];
void large();
void small();
void even_odd();
void mean();
int main()
{
 printf("Enter elements of array: ");
 for(int i=0;i<10;i++)
 scanf("%d",&ar[i]);
 large();
 small();
 even_odd();
 mean();
 return 0;
}
void large()
{
 int l=ar[0];
 for(int i=0;i<10;i++)
 {
 if(ar[i]>l)
 l=ar[i];
 }
 printf("\nLargest number in the array is: %d",l);
}
void small()
{
 int s=ar[0];
 for(int i=0;i<10;i++)
 {
 if(ar[i]<s)
 s=ar[i];
 }
 printf("\nSmallest number in the array is: %d",s); 
}
void even_odd()
{
 int even[10];
 int odd[10];
 int c1=0,c2=0;
 for(int i=0;i<10;i++)
 {
 if(ar[i]%2==0)
 {
 even[c1]=ar[i];
 c1++;
 }
 else
 {
 odd[c2]=ar[i];
 c2++;
 }
 }
 printf("\nEven Elements: ");
 for(int i=0;i<c1;i++)
 printf("%d ",even[i]);
 printf("\nOdd elements: ");
 for(int i=0;i<c2;i++)
 printf("%d ",odd[i]);
}
void mean()
{
 int sum=0;
 float mean;
 for(int i=0;i<10;i++)
 {
 sum=sum+ar[i];
 }
 mean=(float)sum/10;
 printf("\nMean of the elements: %.2lf",mean);
}