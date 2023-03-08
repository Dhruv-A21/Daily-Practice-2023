#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    vector <int> a(N);
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<N-1;i++){
	        for(int j=0;j<N-1-i;j++){
	            if(a[j]>a[j+1]){
	                int temp=a[j];
	                a[j]=a[j+1];
	                a[j+1]=temp;
	            }
	        }
	    }
	    int c=0;
	    int count=0;
	    int flag=0;
	    for(int i=N-1;i>=0;i--){
	        c=c+a[i];
	        count++;
	        if(c>=M){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<count<<endl;
	    }
	    else{
	        cout<<"-1\n";
	    }
	}
	return 0;
}
