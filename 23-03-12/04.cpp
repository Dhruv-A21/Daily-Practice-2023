#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	string s;
	cin>>s;
	for(int i=N-1;i>=0;i--){
	    if(s[i]=='1'){
	        int p=N-1-i;
	        cout<<p;
	        break;
	    }
	}
	return 0;
}
