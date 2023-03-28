#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    int ma=0;
	    int mi=N;
	    int count=1;
	    for(int i=0;i<N-1;i++){
	        int temp=abs(a[i+1]-a[i]);
	        if(temp<=2){
	            count++;
	        }
	        else{
	            ma=max(ma,count);
	            mi=min(mi,count);
	            count=1;
	        }
	    }
	    ma=max(ma,count);
	            mi=min(mi,count);
	            count=1;
	    cout<<mi<<' '<<ma<<endl;
	}
	return 0;
}
