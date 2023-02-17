#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N],b[N];
	    int count=0;
	    for(int i=0;i<N;i++){
	        scanf("%d %d",&a[i],&b[i]);
	        if(b[i]-a[i]>5){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
