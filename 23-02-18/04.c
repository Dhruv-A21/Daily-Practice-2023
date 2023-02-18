#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N];
	    int f[1001]={0};
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	        f[a[i]]++;
	    }
	    int max=0;
	    for(int i=0;i<N;i++){
	        if(max<f[a[i]]){
	            max=f[a[i]];
	        }
	    }
	    printf("%d\n",N-max);
	}
	return 0;
}

