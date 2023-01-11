#include <stdio.h>
#include <math.h>

int main(void) {
	int T,N,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&Y);
	    int a[N];
	    int O=0;
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	        O=O|a[i];
	    }
	    int T=-1;
	    int b=pow(2,20)+1;
	    for(int i=0;i<b;i++){
	        int a=O|i;
	        if(a==Y){
	            T=i;
	            break;
	        }
	    }
	    printf("%d\n",T);
	}
	return 0;
}

