#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    if(15*X>=2*Y){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
