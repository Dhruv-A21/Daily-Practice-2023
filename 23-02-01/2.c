#include <stdio.h>

int main(void) {
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X<Y && X<Z){
	        printf("ALICE\n");
	    }
	    else if(Y<X && Y<Z){
	        printf("BOB\n");
	    }
	    else{
	        printf("CHARLIE\n");
	    }
	}
	return 0;
}

