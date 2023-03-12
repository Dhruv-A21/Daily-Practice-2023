#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s[6];
	    string c;
	    int f[6]={0};
	    for(int i=0;i<6;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<6;i++){
	        for(int j=0;j<6;j++){
	            if(s[i]==s[j]){
	                f[i]++;
	            }
	        }
	    }
	    bool f1=true;
	    for(int i=0;i<6;i++){
	        if(f[i]>=3){
	            f1=false;
	            c=s[i];
	            break;
	        }
	    }
	    if(f1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        if((s[0]==c || s[1]==c) && (s[2]==c || s[3]==c) && (s[4]==c || s[5]==c)){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
