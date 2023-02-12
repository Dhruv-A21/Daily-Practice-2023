#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int a,b,c,d,e,f;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	    if((a==c && b==d)||(a==d && b==c)){
	        printf("1\n");
	    }
	    else if((a==e && b==f)||(a==f && b==e)){
	        printf("2\n");
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

