#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    char s[N];
	    scanf("%s",s);
	    int c0=0,c1=0;
	    for(int i=0;i<N;i++){
	        if(s[i]=='0'){
	            c0++;
	        }
	        else{
	            c1++;
	        }
	    }
	    int count=0;
	    if(c1>c0){
	        count++;
	        count=count+c0;
	    }
	    else{
	        count=count+c1;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

