#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,M,X,Y;
	cin>>T;
	while(T--){
	    cin>>N>>M;
	    cin>>X>>Y;
	    while(N--){
	        int F=0,P=0;
	        string s;
	        cin>>s;
	        for(int i=0;i<M;i++){
	            if(s[i]=='F'){
	                F++;
	            }
	            else if(s[i]=='P'){
	                P++;
	            }
	        }
	        if(F>=X || ((F>=X-1) && (P>=Y))){
	            cout<<1;
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
