#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a[N],b[N];
	    bool c1=false;
	    bool c2=false;
	    bool zero=false;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        if(a[i]==1){
	            c1=true;
	        }
	    }
	    for(int i=0;i<N;i++){
	        cin>>b[i];
	        if(b[i]==1){
	            c2=true;
	        }
	        if(b[i]==0){
	            if(a[i]==1){
	                zero=true;
	            }
	        }
	    }
	    bool flag=false;
	    if((a[0]!=b[0]) || (a[N-1]!=b[N-1]) || zero==true || c1!=c2){
	        cout<<"NO\n";
	    }
	    else{
	        cout<<"YES\n";
	    }
	}
	return 0;
}
