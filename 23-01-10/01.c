#include <stdio.h>

int main(void) {
	int T,N,M;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&M);
	    int n,m;
	    n=N%2;
	    m=M%2;
	    if(n==0 || m==0){
	        if(n==0 && m==0){
	            printf("%d\n",0);
	        }
	        else if(n==0){
	            printf("%d\n",N);
	        }
	        else{
	            printf("%d\n",M);
	        }
	    }
	    else{
	        printf("%d\n",N+M-1);
	    }
	    
	}
	return 0;
}

