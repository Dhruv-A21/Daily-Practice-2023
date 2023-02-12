#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int L,R;
	    scanf("%d %d",&L,&R);
	    if(L==R){
	        printf("1\n");
	    }
	    else{
	        int num=(R-L+1);
	        int x=num*(num-1)/2;
	        printf("%d\n",num+x);
	    }
	}
	return 0;
}

