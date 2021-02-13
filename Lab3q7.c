#include<stdio.h>
int main(){
	int i,j,k;
	int value,rows;
	scanf("%d",&rows);
	printf("\n");
	for(i=0; i<rows; i++){
	    value=1;
		for(j=0; j<rows-1-i; j++){
			printf(" ");
		}
		for(k=0; k<=i; k++){
			printf(" %d",value);
			value=value*(i-k)/(k+1);
		}
	printf("\n");
	}
	return 0;
}