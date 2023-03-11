#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    cin.ignore();
    string s;
    while(T--){
        getline(cin,s);
        int l=s.length();
        bool flag=false;
        for(int i=0;i<l-2;i++){
            if(s[i]=='n' && s[i+1]=='o' && s[i+2]=='t'){
                if((s[i-1]==' ' || i==0)&& (s[i+3]==' '|| i+3==l)){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            printf("Real Fancy\n");
        }
        else{
            printf("regularly fancy\n");
        }
        
    }
    
	return 0;
}
