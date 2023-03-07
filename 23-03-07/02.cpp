#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int a[N],b[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<N;i++){
	        cin>>b[i];
	    }
	    int w=0,d1=0,d2=0;
	    for(int i=0;i<N;i++){
	        if(a[i]==b[i] && d1==d2){
	            w=w+a[i];
	        }
	        else{
	            d1=d1+a[i];
	            d2=d2+b[i];
	        }
	    }
	    cout<<w<<endl;
	}
	return 0;
}
