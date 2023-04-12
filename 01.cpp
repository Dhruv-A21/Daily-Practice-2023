#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    int s=0;
	    int c=0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        s=s+A[i];
	        float r=(s*100)/float(i+1);
	        if(r==100){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
