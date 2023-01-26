#include <stdio.h>

int main(void) {
	int T,A,B,C,D;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d",&A,&B,&C,&D);
	    int c=0;
	    int f[9]={0};
	    for(int i=A;i<=B;i++){
	        f[i]++;
	    }
	    for(int i=C;i<=D;i++){
	        f[i]++;
	    }
	    for(int i=0;i<9;i++){
	        if(f[i]>0){
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}
