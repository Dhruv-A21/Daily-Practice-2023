#include <stdio.h>
void sum(int D,int N){
    while(D--){
        int a=0;
        for(int i=1;i<=N;i++){
            a=a+i;
        }
        N=a;
    }
    printf("%d\n",N);
}

int main(void) {
	int T,D,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&D,&N);
	    sum(D,N);
	}
	return 0;
}
