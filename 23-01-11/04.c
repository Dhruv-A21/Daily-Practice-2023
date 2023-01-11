#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int c=0;
	    while(N>0){
	        if(N%10==7){
	            c++;
	            break;
	        }
	        N=N/10;
	    }
	    if(c==1){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

