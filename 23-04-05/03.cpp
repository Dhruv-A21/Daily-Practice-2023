#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,K;
	cin>>T;
	while(T--){
	    cin>>N>>K;
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        s[0]='1';
	        K--;
	    }
	    cout<<s;
	    for(int i=0;i<K;i++){
	        cout<<'0';
	    }
	    cout<<endl;
	}
	return 0;
}
