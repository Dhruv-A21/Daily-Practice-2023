#include <iostream>

using namespace std;

#define int long long

signed main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a[N];
	    int max=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        if(max<a[i]){
	            max=a[i];
	        }
	    }
	    max++;
	    int f[max]={0};
	    for(int i=0;i<N;i++){
	        f[a[i]]++;
	    }
	    int s=0;
	    int o=0;
	    for(int i=0;i<max;i++){
	        if(f[i]==1){
	            s++;
	        }
	        if(f[i]%2!=0){
	            o++;
	        }
	    }
	    if(f[max-1]==1){
	        if(s==1 && o==1){
	            s=3;
	        }
	    }
	    if(s%2!=0){
	        s++;
	    }
	    cout<<s/2<<endl;
	}
	return 0;
}
