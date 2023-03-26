#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int p=0;
	    int n=-1;
	    int a[N];
	    if(N%2==1){
	        printf("-1\n");
	    }
	    else{
	        for(int i=0;i<N/2;i++){
	        if(i%2==0){
	            a[i]=p;
	            a[N-i-1]=n;
	        }
	        else{
	            a[i]=-1*p;
	            a[N-i-1]=-1*n;
	        }
	        p++;
	        n--;
	    }
	    for(int i=0;i<N;i++){
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	    }
	}
	return 0;
}

