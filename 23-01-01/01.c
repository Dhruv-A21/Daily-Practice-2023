#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	int N,M;
	while(T--){
	    scanf("%d %d",&N,&M);
	    int f[M];
	    for(int i=0;i<M;i++){
	        f[i]=0;
	    }
	    int a[N];
	    int flag=0;
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	        f[a[i]-1]++;
	        
	    }
	    for(int i=0;i<M;i++){
	        if(f[i]==0){
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==1){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}
