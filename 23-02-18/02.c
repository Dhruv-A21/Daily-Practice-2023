#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int cnt=0;
	    while(n)
	    {
	        int m=(n%10);
	        
	        if(m==4) cnt++;
	        
	        n/=10;
	    }
	    printf("%d\n",cnt);
	}
	  
	
	return 0;
}



