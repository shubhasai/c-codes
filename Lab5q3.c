#include <stdio.h>
#include <stdlib.h>
void add();
void subtract();
void mult();
void transpose();
void determinant();
void frequency();
int main()
{
 add();
 subtract();
 mult();
 transpose();
 determinant();
 frequency();
 return 0;
}
void add()
{
 int ar1[2][3];
 int ar2[2][3];
 int add[2][3];
 printf("Addition of two 2x3 matrices:\n");
 printf("Enter elements of first matrix:\n");
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<3;j++) 
 scanf("%d",&ar1[i][j]);
 }
 printf("Enter elements of second matrix:\n");
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<3;j++)
 scanf("%d",&ar2[i][j]);
 }
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<3;j++)
 add[i][j]=ar1[i][j]+ar2[i][j];
 }
 printf("Sum of matrices:\n");
 for(int i=0;i<2;i++)
 {
 for(int j=0;j<3;j++)
 printf("%d ",add[i][j]);
 printf("\n");
 }
 printf("\n");
}
void subtract()
{
 int ar1[5][4];
 int ar2[5][4];
 int sub[5][4];
 printf("Subtraction of two 5x4 matrices:\n");
 printf("Enter elements of first matrix:\n");
 for(int i=0;i<5;i++)
 {
 for(int j=0;j<4;j++)
 scanf("%d",&ar1[i][j]);
 }
 printf("Enter elements of second matrix:\n");
 for(int i=0;i<5;i++)
 {
 for(int j=0;j<4;j++)
 scanf("%d",&ar2[i][j]);
 }
 for(int i=0;i<5;i++)
 { 
 for(int j=0;j<4;j++)
 sub[i][j]=ar1[i][j]-ar2[i][j];
 }
 printf("\n");
 for(int i=0;i<5;i++)
 {
 for(int j=0;j<4;j++)
 printf("%d ",sub[i][j]);
 printf("\n");
 }
 printf("\n");
}
void mult()
{
 printf("Multiplication of two matrices: ");
 int r1,c1,r2,c2;
 printf("Enter no of rows and columns of matrix: ");
 scanf("%d %d",&r1,&c1);
 int ar1[r1][c1];
 printf("\nEnter elements of the first matrix:\n");
 for(int i=0;i<r1;i++)
 {
 for(int j=0;j<c1;j++)
 scanf("%d",&ar1[i][j]);
 }
 printf("\nEnter no of rows and columns of second matrix: ");
 scanf("%d %d",&r2,&c2);
 int ar2[r2][c2];
 printf("\nEnter elements of the second matrix:\n");
 for(int i=0;i<r2;i++)
 {
 for(int j=0;j<c2;j++)
 scanf("%d",&ar2[i][j]);
 }
 int mult[r1][c2];
 if(r2==c1)
 {
 for(int i=0;i<r1;i++)
 {
 for(int j=0;j<c2;j++)
 {
 mult[i][j]=0;
 for(int k=0;k<c1;k++) 
 mult[i][j]=mult[i][j]+ar1[i][k]*ar2[k][j];
 }
 }
 for(int i=0;i<r1;i++)
 {
 for(int j=0;j<c2;j++)
 printf("%d ",mult[i][j]);
 printf("\n");
 }
 }
 else
 printf("Incompatible matrix size");
 printf("\n");
}
void transpose()
{
 int r,c;
 printf(" transpose of any given matrix: ");
 printf("Enter rows and columns: ");
 scanf("%d %d",&r,&c);
 int ar[r][c];
 int tr[20][20];
 printf("Enter the elements of matrix:\n");
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 scanf("%d",&ar[i][j]);
 }
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 tr[j][i]=ar[i][j];
 }
 printf("\nTranspose matrix: \n");
 for(int i=0;i<c;i++)
 {
 for(int j=0;j<r;j++)
 printf("%d ",tr[i][j]);
 printf("\n");
}
printf("\n"); 
}
void determinant()
{
 int a[3][3];
 printf("Determinant of a 3x3 matrix.\nEnter elements of matrix:\n");
 for(int i=0;i<3;i++)
 {
 for(int j=0;j<3;j++)
 scanf("%d",&a[i][j]);
 }
 int sum=0;
 for(int i=0;i<3;i++)
 {
 sum+= (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2]
[(i+1)%3]));
 }
 printf("Determinant= %d\n",sum);
 printf("\n");
}
void frequency()
{
 int r,c;
 printf("frequency of occurrence of the elements in a 5x5 matrix.\nEnter rows and columns of the matrix: ");
 scanf("%d %d",&r,&c);
 int ar[r][c];
 printf("Enter elements of the matrix:\n");
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 scanf("%d",&ar[i][j]);
 }
 int count[r][c];
 int num,flag;
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 {
 flag=1;
 num=ar[i][j];
 if(count[i][j]!=1) 
 {
 for(int k=0;k<r;k++)
 {
 for(int l=0;l<c;l++)
 {
 if((i==k)&&(j==l))
 continue;
 if(ar[i][j]==ar[k][l])
 {
 count[k][l]=1;
 flag++;
 }
 }
 }
 printf("\nThe frequency of element %d is %d",num,flag);
 }
 }
 }
} 