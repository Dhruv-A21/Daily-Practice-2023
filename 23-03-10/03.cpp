#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string s;
	    cin>>s;
	    int m=0;
	    int r=0;
	    int count=0;
	    for(int i=0;s[i];i++){
	        char c=s[i]-(i%26);
	        if(c<'a'){
	            c=c+26;
	        }
	        count=0;
	        for(int j=0,k=0;s[j];j++,k++){
	            if(s[j]-c==k){
	                count++;
	            }
	            if(k==25){
	                k=-1;
	            }
	        }
	        if(count>m){
	            m=count;
	        }
	    }
	    printf("%d\n",N-m);
	}
	return 0;
}
