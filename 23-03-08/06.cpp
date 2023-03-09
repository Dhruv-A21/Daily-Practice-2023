#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    if(N%2!=0){
	        printf("-1\n");
	    }
	    else{
	        int o=N-1;
	        while(N>0){
	            printf("%d %d ",o,N);
	            o=o-2;
	            N=N-2;
	        }
	        printf("\n");
	    }
	}
	return 0;
}
