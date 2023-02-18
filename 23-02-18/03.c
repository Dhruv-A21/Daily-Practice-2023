#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int A,B;
        scanf("%d %d",&A,&B);
        int r=A+B;
        int flag=0;
        int c=0;
        while(r>0){
            flag=1;
            int a=r%10;
            r=r/10;
            if(a==0 || a==6 ||a==9){
                c=c+6;
            }
            else if(a==1){
                c=c+2;
            }
            else if(a==2 || a==3 || a==5){
                c=c+5;
            }
            else if(a==4){
                c=c+4;
            }
            else if(a==7){
                c=c+3;
            }
            else if(a==8){
                c=c+7;
            }
        }
        if(flag==0){
            printf("%d\n",6);
        }
        else{
            printf("%d\n",c);
        }
    }
	return 0;
}

