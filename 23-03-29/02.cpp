#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string s;
	    cin>>s;
	    int f=0;
	    char a;
	    int c=0;
	    for(int i=0;i<N;i++){
	        if(f==0){
	            a=s[i];
	            f=1;
	            c=0;
	        }
	        if(a==s[i]){
	            c++;
	        }
	        else{
	            f=0;
	            i--;
	            if(c%2==0){
	                cout<<a<<a;
	            }
	            else{
	                cout<<a;
	            }   
	        }
	    }
	    if(c%2==0){
	                cout<<a<<a<<endl;
	            }
	            else{
	                cout<<a<<endl;
	            }
	}
	return 0;
}
