#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,K,V;
	    cin>>N>>K>>V;
	    int a[N];
	    int sum=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    int t=V*(N+K);
	    t=t-sum;
	    if(t>0 && t%K==0){
	        printf("%d\n",t/K);
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}
