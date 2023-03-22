#include <bits/stdc++.h>
using namespace std;
long long int HCF(long long int a,long long int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}

long long int LCM(long long int a,long long int b,long long int h){
    long long int l=(a*b)/h;
    return l;
}

int main() {
	long long int T,A,B,C,D;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C>>D;
	    long long int mi=min(B,D);
	    long long int ma=max(B,D);
	    long long int r=A%B;
	    if(mi==D){
	        r=C%D;
	    }
	    if(r<=mi-2){
	        cout<<1<<endl;
	    }
	    else if(A==1 || B==1){
	        cout<<ma<<endl;
	    }
	    else{
	        long long int H=HCF(B,D);
	        long long int L=LCM(B,D,H);
	        long long int start=L-H;
	        if(start==mi){
	            start=start+2;
	        }
	        if(H!=1){
	            start--;
	        }
	        for(long long int i=start;i>=1;i--){
	            if((A+i)%B==(C+i)%D){
	                cout<<i<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
