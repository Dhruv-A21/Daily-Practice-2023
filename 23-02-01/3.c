#include <stdio.h>

int main(void) {
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    int total=X+Y+Z;
	    if(total<=5){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}

