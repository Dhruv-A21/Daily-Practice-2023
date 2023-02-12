#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,K;
	    scanf("%d %d",&N,&K);
	    int times=N/K;
	    printf("%d\n",N-(K*times));
	}
	return 0;
}

