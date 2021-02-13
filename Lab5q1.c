#include <stdio.h>
int main()
{
 int arr[10];
 int p, i, x;
 int n = 10;
 printf("Enter 10 numbers: ");
 for( i = 0; i < n; ++i)
 {
 scanf("%d", &arr[i]);
 }
 for (i = 0; i < n; ++i)
 {
 printf("%d\n", arr[i]);
 }
 printf("Enter element you wish to insert in array:");
 scanf("%d", &x);
 printf("Enter position where the element is to be inserted:");
 scanf("%d", &p);
 n++;
 for (i = n-1; i >= p; i--)
 arr[i] = arr[i - 1];

 arr[p - 1] = x;

 for (i = 0; i < n; i++)
 printf("%d \n", arr[i]);
 printf("Enter the position where you wish to delete element:\n");
 scanf("%d", &p);
 if (p >= n+1)
 printf("Deletion not possible.\n");
 else
 {
 for (i = p - 1; i < n - 1; i++)
 arr[i] = arr[i+1];

 for (i = 0; i < n - 1; i++)
 printf("%d\n", arr[i]);
 }

return 0;
} 
