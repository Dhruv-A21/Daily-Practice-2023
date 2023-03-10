#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,A,B,N;
	cin>>T;
	while(T--){
	    cin>>A>>B>>N;
	    
	    if((B-A)%(N+1)==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
