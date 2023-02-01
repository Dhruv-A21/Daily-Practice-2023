#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,X;
	    scanf("%d %d",&N,&X);
	    int a[N];
	    int E=0;
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	        if(a[i]%2==0){
	            E++;
	        }
	    }
	    if(E==N && X%2==0){
	        printf("-1\n");
	    }
	    else if(X%2==1){
	        if(E%2==0){
	            printf("%d\n",E/2);
	        }
	        else{
	            printf("%d\n",(E/2)+1);
	        }
	    }
	    else{
	        printf("%d\n",E);
	    }
	}
	return 0;
}

