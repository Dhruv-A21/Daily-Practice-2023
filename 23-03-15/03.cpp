#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int a[N];
	    int sum=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    if(sum%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
