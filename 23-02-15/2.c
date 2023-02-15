#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    int sum;
	    if(Y>X*10){
	        sum=X*10*Z;
	    }
	    else{
	        sum=Y*Z;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

