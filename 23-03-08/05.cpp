#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int a[N],b[N];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<N;i++){
	        cin>>b[i];
	    }
	    int c=0;
	    for(int i=0;i<N;i++){
	        if(b[i]>2*a[i] || a[i]>2*b[i]){
	            continue;
	        }
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}
