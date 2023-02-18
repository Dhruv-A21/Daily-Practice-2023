#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        int a[N];
        int c=0;
        int f=0;
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
            if( a[i]==1 ||a[i]==2 ||a[i]==3 ||a[i]==4 ||a[i]==5 ||a[i]==6 ||a[i]==7 ){
                c++;
            }
            if(c==7){
                f=i+1;
                c=0;
            }
        }
        printf("%d\n",f);
    }
	return 0;
}

