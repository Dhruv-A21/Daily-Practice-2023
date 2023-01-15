#include <stdio.h>

int main(void) {
	int T,A,B,C;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&A,&B,&C);
	    int neg=0,zero=0;
	    if(A<0){
	        neg++;
	    }
	    if(A==0){
	        zero++;
	    }
	    if(B<0){
	        neg++;
	    }
	    if(B==0){
	        zero++;
	    }
	    if(C<0){
	        neg++;
	    }
	    if(C==0){
	        zero++;
	    }
	    if(neg>0 && neg<3 && zero<2){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

