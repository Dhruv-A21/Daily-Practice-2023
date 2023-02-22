#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    int r;
	    if(Y>X){
	        r=X+(Y-X)*2;
	    }
	    else{
	        r=Y;
	    }
	    printf("%d\n",r);
	}
	return 0;
}

