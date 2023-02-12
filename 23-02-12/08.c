#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int L,R;
	    scanf("%d %d",&L,&R);
	    int num=(2*R)-(2*L)+1;
	    printf("%d\n",num);
	}
	return 0;
}

