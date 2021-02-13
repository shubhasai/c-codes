#include<stdio.h>
#include<math.h>
int root();
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    root(x,y,z);
    return 0;
}
int root(int a,int b,int c){
    float k= (b*b)-4*a*c;
    float d;
    float m,n;
    if(k>0){
        d=sqrt(k);
        printf("The roots are real-and-distinct\n");
        m =(-b+d)/(2*a);
        n =(-b-d)/(2*a);
        printf("They are: (%f) and (%f)",m,n);
    }
    else if(k==0){
        printf("The roots are real-and-equal\n");
        m=-b/(2*a);
        printf("They are: (%f) each",m);
    }
    else{
        printf("The roots are imaginary.\n");
        k=-k;
        d=sqrt(k);
        float i,j;
        i=-b/(2*a);
        j= d/(2*a);
        printf("They are: (%f)+(%f)i and (%f)-(%f)i",i,j,i,j);
    }
    return 0;
}