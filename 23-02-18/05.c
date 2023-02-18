#include <stdio.h>
int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int f[101]={0};
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++){
	        f[a[i]]++;
	    }
	    int count=0;
	    for(int i=0;i<101;i++){
	        if(f[i]>=1){
	            count++;
	        }
	        
	    }
	    printf("%d\n",count);
	}
	return 0;
}
