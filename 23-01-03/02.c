#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    for(int i=1;i<=N;i++){
	        printf("%d ",i);
	    }
	    printf("\n");
	}
	return 0;
}
