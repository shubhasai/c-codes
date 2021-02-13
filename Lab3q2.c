#include <stdio.h>
int main() {
	int a;
	int i=1;
	while(i>0){
	    scanf("%d",&a);
	    if(a%2==0){
	        printf("even\n");
	    }
	    else{
	        printf("odd\n");
	    }
	    scanf("%d",&i);
	}
	return 0;
}