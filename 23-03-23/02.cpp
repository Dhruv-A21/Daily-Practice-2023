#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int mi=100;
	    int a[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        mi=min(mi,a[i]);
	    }
	    int c=0;
	    for(int i=0;i<N;i++){
	        if(a[i]==mi){
	            c++;
	        }
	    }
	    cout<<N-c<<endl;
	}
	return 0;
}
