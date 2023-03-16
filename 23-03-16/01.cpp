#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a[N];
	    int f[100001]={0};
	    int max=0,count=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        if(a[i]>max){
	            max=a[i];
	        }
	        f[a[i]]++;
	    }
	    max++;
	    for(int i=0;i<max;i++){
	        if(f[i]>0){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
