#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    int d=X-Y;
	    if(d<=0){
	        cout<<0<<endl;
	    }
	    else{
	        for(int i=1;;i++){
	            if((i*(i+1))>=2*d){
	                cout<<i<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
