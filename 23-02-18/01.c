#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b,c,d,K;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&K);
	    int D=(c-a);
	    if(D<0){
	        D=a-c;
	    }
	    if((d-b)<0){
	        D=D+(b-d);
	    }
	    else{
	        D=D+(d-b);
	    }
	    if(D>K){
	        printf("NO\n");
	    }
	    else{
	        int e=K-D;
	        if(e%2!=0){
	            printf("NO\n");
	        }
	        else{
	            printf("YES\n");
	        }
	    }
	}
	return 0;
}
