#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,A,B,C;
	    scanf("%d %d %d %d",&N,&A,&B,&C);
	    int m1=A;
	    if(m1>B){
	        m1=B;
	    }
	    int left=B-m1;
	    int m2=left;
	    if(m2>C){
	        m2=C;
	    }
	    if(m2<0){
	        m2=0;
	    }
	    if(m1+m2>=N){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
