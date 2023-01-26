#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    char s[N+1];
	    scanf("%s",s);
	    int n=0;
	    for(int i=0;i<N;i++){
	        if(s[i]=='1'){
	            n++;
	        }
	    }
	    if(n<=3 && N>1){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

