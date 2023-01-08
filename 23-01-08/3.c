#include <stdio.h>

int main(void) {
	int T,R1,R2,W1,W2,C1,C2;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&R1,&W1,&C1);
	    scanf("%d %d %d",&R2,&W2,&C2);
	    int count=0;
	    if(R1>R2){
	        count++;
	    }
	    if(W1>W2){
	        count++;
	    }
	    if(C1>C2){
	        count++;
	    }
	    if(count>=2){
	        printf("A\n");
	    }
	    else{
	        printf("B\n");
	    }
	}
	return 0;
}

