#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int con();
int main(){
 char a[10];
 gets(a);
 con(a);
 return 0;   
}
int con(char ch[10]){
    int l=strlen(ch);
    float c,f,k;
    if(ch[l-1]=='C'){
        float t = atof(ch);
        f=(t*1.8) + 32;
        k=t + 273.15;
        printf("Converted to\n");
        printf("%.2f F\n",f);
        printf("%.2f K\n",k);
    }
    else if(ch[l-1]=='F'){
        float t = atof(ch);
        c=5 * (t - 32) / 9;
        k=c+273.15;
        printf("Converted to\n");
        printf("%.2f C\n",c);
        printf("%.2f K\n",k);
    }
    else{
        float t = atof(ch);
        c=t-273.15;
        f=(c*1.8)+32;
        printf("Converted to\n");
        printf("%.2f C\n",c);
        printf("%.2f F\n",f);
    }
    return 0;
}