#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    for(int i=0;i<N;i++){
	        if(i%2==0){
	            printf("%d ",10);
	        }
	        else{
	            printf("%d ",11);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

