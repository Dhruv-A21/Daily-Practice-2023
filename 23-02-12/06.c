#include <stdio.h>
#include <math.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int u,v,a,s;
	    scanf("%d %d %d %d",&u,&v,&a,&s);
	    int w=pow(u,2)-(2*a*s);
	    int x=pow(v,2);
	    if(w<=x){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

