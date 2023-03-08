#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,H,X,Y;
	cin>>T;
	while(T--){
	    cin>>H>>X>>Y;
	    H=H-Y;
	    if(H<=0){
	        printf("1\n");
	    }
	    else{
	        int m=H/X;
	        if(H%X!=0){
	            m++;
	        }
	        printf("%d\n",m+1);
	    }
	}
	return 0;
}
