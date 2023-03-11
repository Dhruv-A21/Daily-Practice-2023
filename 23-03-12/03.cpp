#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        string s;
        cin>>s;
        int b=1;
        for(int i=0;i<N-1;i++){
            if(s[i]!=s[i+1]){
                b++;
            }
        }
        cout<<b<<endl;
    }
	return 0;
}
