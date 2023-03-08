#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int a[N];
	    int max=0;
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	        if(max<a[i]){
	            max=a[i];
	        }
	    }
	    int f[max]={0};
	    for(int i=0;i<N;i++){
	        f[a[i]-1]++;
	    }
	    int fm=0;
	    for(int i=0;i<max;i++){
	        if(fm<f[i]){
	            fm=f[i];
	        }
	    }
	    printf("%d\n",N-fm);
	}
	return 0;
}
