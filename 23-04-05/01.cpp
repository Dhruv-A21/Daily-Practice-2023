#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,X;
	cin>>T;
	while(T--){
	    cin>>N>>X;
	    vector <int> a(N);
	    int c=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        if(a[i]>=X){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
