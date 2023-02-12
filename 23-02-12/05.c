#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int S,A,B,C;
	    scanf("%d %d %d %d",&S,&A,&B,&C);
	    int N=((100+C)*S);
	    if(N>=A*100 && N<=B*100){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

