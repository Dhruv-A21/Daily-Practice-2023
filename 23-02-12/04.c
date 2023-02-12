#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b,c,d,M;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&M);
	    int W=b-a;
	    int min=M*c;
	    int max=M*d;
	    if(W>=min && W<=max){
	        printf("1\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

