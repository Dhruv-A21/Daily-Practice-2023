#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int n=1;
	    int sum=0;
	    while(n<=N){
	        int k=(N-n+1)*(N-n+1);
	        sum=sum+k;
	        n=n+2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
