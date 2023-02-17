#include <stdio.h>

int main(void) {
	int T,N,K;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&K);
	    if(N%K==0){
	        printf("%d\n",N/K);
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}
