#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n,s;
	    scanf("%d %d",&n,&s);
	    if(n>=s){
	        printf("%d\n",s);
	    }
	    else{
	        printf("%d\n",abs(2*n-s));
	    }
	}
	return 0;
}

