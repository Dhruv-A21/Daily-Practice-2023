#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,X;
	    scanf("%d %d",&N,&X);
	    int max=0;
	    int count=0;
	    for(int i=0;i<N;i++){
	        int b,c;
	        scanf("%d %d",&b,&c);
	        if(b<=X){
	            if(max<c){
	                max=c;
	            }
	        }
	        
	    }
	    printf("%d\n",max);
	}
	return 0;
}

