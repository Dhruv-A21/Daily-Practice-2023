#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int sum=N*(N+1)/2;
	    if(sum%2==0){
	        printf("%d\n",N);
	    }
	    else{
	        printf("%d\n",N-1);
	    }
	}
	return 0;
}

