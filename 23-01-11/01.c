#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int a[N];
	    int min;
	    for(int i=0;i<1;i++){
	        scanf("%d",&a[i]);
	        min=a[i];
	    }
	    for(int i=1;i<N;i++){
	        scanf("%d",&a[i]);
	        if(a[i]<min){
	            min=a[i];
	        }
	    }
	    int sum=0;
	    int c=0;
	    for(int i=0;i<N;i++){
	        sum=sum+a[i];
	    }
	    printf("%d\n",sum-min);
	    
	}
	return 0;
}

