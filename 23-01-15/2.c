#include <stdio.h>

int main(void) {
	int T,A,B,C;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&A,&B,&C);
	    int neg=0;
	    if(A*B<0){
	        neg++;
	    }
	    if(B*C<0){
	        neg++;
	    }
	    if(A*C<0){
	        neg++;
	    }
	    if(neg>0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}



