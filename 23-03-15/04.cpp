#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    if(X>8){
	        cout<<"NO\n";
	    }
	    else if(X*Y>500){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
