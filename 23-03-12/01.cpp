#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    char c=s[N-1];
	    bool flag=false;
	    for(int i=0;i<N-1;i++){
	        if(s[i]==c){
	            flag=true;
	            break;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
