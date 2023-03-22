#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a=N*N;
	    vector <int> out(a);
	    int k=1;
	    int d=0;
	    for(int i=0;k<=a;i++,k=k+2){
	        out[i]=k;
	        d=i;
	    }
	    k=2;
	    for(int i=d+1;k<=a;i++,k=k+2){
	        out[i]=k;
	    }
	    for(int i=0;i<a;i++){
	        cout<<out[i]<<" ";
	        if((i+1)%N==0){
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
