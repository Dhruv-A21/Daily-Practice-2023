#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int i,d=0,k=0;
    for(i=0;s[i];i++){
        k++;
        if(s[i]=='.'){
            d=i;
            break;
        }
    }
    if(k==l){
        d=l+1;
    }
    int num=0;
    float dec=0;
    for(int i=d-1;i>=0;i--){
        int n=0;
        if(s[i]=='1'){
            n=1;
        }
        int p=pow(2,d-1-i);
        int a=n*p;
        num=num+a;
    }
    int z=0;
    for(int i=d+1;s[i];i++){
        z++;
        float n=0;
        if(s[i]=='1'){
            n=1;
        }
        float p=pow(2,d-i);
        float a=n*p;
        dec=dec+a;
    }
    int v=pow(10,z);
    float x=dec*v;
    printf("%d.%d",num,(int)x);
    return 0;
}
