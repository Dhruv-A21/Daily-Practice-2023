#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a[4];
	    for(int i=0;i<4;i++){
	        cin>>a[i];
	    }
	    sort(a,a+4);
	    int w=0;
	    for(int i=0;i<4;i++){
	        w=w+(a[i]-a[0]);
	    }
	    printf("%d\n",w);
	}
	return 0;
}
