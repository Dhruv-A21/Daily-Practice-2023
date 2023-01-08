#include <stdio.h>

int main(void) {
	int T,A,B,C;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&A,&B,&C);
	    int min=A;
	    if(min>B){
	        min=B;
	    }
	    if(min>C){
	        min=C;
	    }
	    printf("%d\n",A+B+C-min);
	}
	return 0;
}

