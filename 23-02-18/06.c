#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,W;
	    scanf("%d %d",&N,&W);
	    int a[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	     for(int i=0;i<N;i++)
	    {
	        for(int j=i+1;j<N;j++)
	        {
	            if(a[i]>a[j])
	            {
	                int temp;
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	    }
	    int sum=0;
	    int c=0;
	    for(int i=N-1;i>=0;i--){
	        sum=sum+a[i];
	        c++;
	        if(sum>=W){
	            break;
	        }
	    }
	   printf("%d\n",N-c);
	}
	return 0;
}

