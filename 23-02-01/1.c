#include <stdio.h>

int main(void) {
	int T,N,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&N,&X,&Y);
	    if(X*Y>=N){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

