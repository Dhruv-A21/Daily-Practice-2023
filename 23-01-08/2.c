#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int a[N],b[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<N;i++){
	        scanf("%d",&b[i]);
	    }
	    int count=0;
	    int max=0;
	    for(int i=0;i<N;i++){
	        if(a[i]==0 || b[i]==0){
	            if(max<count){
	                max=count;
	            }
	            count=0;
	        }
	        else{
	            count++;
	        }
	    }
	    if(max<count){
	        max=count;
	    }
	    printf("%d\n",max);
	}
	return 0;
}

