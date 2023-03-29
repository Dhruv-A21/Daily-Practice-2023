#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,A,B;
	cin>>T;
	while(T--){
	    cin>>N>>A>>B;
	    if(N%2==0){
	        cout<<(A*(N/2))+(B*(N/2))<<endl;
	    }
	    else{
	        cout<<(A*(N/2))+(B*((N/2)+1))<<endl;
	    }
	}
	return 0;
}
