#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int X,Y;
	    scanf("%d %d",&X,&Y);
	    int sum=X+Y;
	    if(sum>6){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

