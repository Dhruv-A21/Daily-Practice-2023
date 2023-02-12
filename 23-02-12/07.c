#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int sum=N*(N+1)/2;
	    int i=N;
	    for(i=N;i>=1;i--){
	        if(sum%2==0){
	            break;
	        }
	        sum=sum-i;
	    }
	    printf("%d\n",i);
	}
	return 0;
}

